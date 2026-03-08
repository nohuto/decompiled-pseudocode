/*
 * XREFs of EtwTraceObject @ 0x1409E2DE8
 * Callers:
 *     ObpDeregisterObject @ 0x140979950 (ObpDeregisterObject.c)
 *     ObpRegisterObject @ 0x14097A3B4 (ObpRegisterObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExCheckSingleFilter @ 0x140462BFE (ExCheckSingleFilter.c)
 *     EtwpTraceKernelEventWithFilter @ 0x1405FC0F8 (EtwpTraceKernelEventWithFilter.c)
 */

void __fastcall EtwTraceObject(unsigned __int16 a1, __int64 a2)
{
  unsigned __int8 v4; // r15
  unsigned int v5; // edi
  int v6; // r9d
  unsigned int v7; // esi
  bool v8; // zf
  __int64 v9; // r14
  __int64 v10; // r8
  int v11; // ebx
  _WORD *v12; // rbp
  int v13; // eax
  int v14; // [rsp+30h] [rbp-68h]
  __int128 v15; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-50h] BYREF

  v4 = ObHeaderCookie ^ *(_BYTE *)(a2 + 24) ^ BYTE1(a2);
  v5 = 0;
  v15 = 0LL;
  v6 = *(_DWORD *)(ObTypeIndexTable[v4] + 192);
  v14 = v6;
  v7 = *(_DWORD *)(EtwpHostSiloState + 4248);
  v8 = !_BitScanForward((unsigned int *)&v9, v7);
  if ( !v8 )
  {
    do
    {
      v7 &= v7 - 1;
      v10 = 32LL * (unsigned int)v9 + EtwpHostSiloState + 4284;
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 16) & 0x80u) != 0 )
        {
          v11 = 0;
          v12 = (_WORD *)(0x140000000LL + 20 * v9 + 12786272);
          if ( *v12 )
          {
            while ( 1 )
            {
              v13 = ExCheckSingleFilter(v6, *(_DWORD *)&v12[2 * v11 + 2]);
              v6 = v14;
              if ( v13 )
                break;
              if ( ++v11 >= (unsigned int)(unsigned __int16)*v12 )
                goto LABEL_9;
            }
            v5 |= 1 << v9;
          }
        }
      }
LABEL_9:
      v8 = !_BitScanForward((unsigned int *)&v9, v7);
    }
    while ( !v8 );
    if ( v5 )
    {
      v16[1] = 16LL;
      *(_QWORD *)&v15 = a2 + 48;
      WORD4(v15) = v4;
      v16[0] = &v15;
      EtwpTraceKernelEventWithFilter((__int64)v16, 1u, v5, a1, 0x10501902u);
    }
  }
}
