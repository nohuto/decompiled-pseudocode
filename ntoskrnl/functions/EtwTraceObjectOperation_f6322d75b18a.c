__int64 __fastcall EtwTraceObjectOperation(unsigned __int16 a1, __int64 a2, int a3, int a4)
{
  int v7; // edi
  int v8; // r9d
  __int64 result; // rax
  unsigned int v10; // esi
  bool v11; // zf
  __int64 v12; // r14
  __int64 v13; // r8
  int v14; // ebx
  _WORD *v15; // rbp
  int v16; // eax
  int v18; // [rsp+34h] [rbp-74h]
  __int64 v19; // [rsp+40h] [rbp-68h] BYREF
  int v20; // [rsp+48h] [rbp-60h]
  int v21; // [rsp+4Ch] [rbp-5Ch]
  _QWORD v22[2]; // [rsp+50h] [rbp-58h] BYREF

  v7 = 0;
  v8 = *(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2)]
                 + 192);
  result = EtwpHostSiloState;
  v18 = v8;
  v10 = *(_DWORD *)(EtwpHostSiloState + 4248);
  v11 = !_BitScanForward((unsigned int *)&v12, v10);
  if ( !v11 )
  {
    do
    {
      result = v10 - 1;
      v10 &= result;
      v13 = 32LL * (unsigned int)v12 + EtwpHostSiloState + 4284;
      if ( v13 )
      {
        result = *(unsigned int *)(v13 + 16);
        if ( (result & 0x80u) != 0LL )
        {
          result = 5 * v12;
          v14 = 0;
          v15 = (_WORD *)(0x140000000LL + 20 * v12 + 12786272);
          if ( *v15 )
          {
            while ( 1 )
            {
              v16 = ExCheckSingleFilter(v8, *(_DWORD *)&v15[2 * v14 + 2]);
              v8 = v18;
              if ( v16 )
                break;
              result = (unsigned __int16)*v15;
              if ( ++v14 >= (unsigned int)result )
                goto LABEL_9;
            }
            result = (unsigned int)(1 << v12);
            v7 |= result;
          }
        }
      }
LABEL_9:
      v11 = !_BitScanForward((unsigned int *)&v12, v10);
    }
    while ( !v11 );
    if ( v7 )
    {
      v19 = a2 + 48;
      v20 = a4;
      v22[0] = &v19;
      v21 = a3;
      v22[1] = 16LL;
      return EtwpTraceKernelEventWithFilter((unsigned int)v22, 1, v7, a1, 290463490);
    }
  }
  return result;
}
