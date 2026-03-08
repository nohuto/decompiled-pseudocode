/*
 * XREFs of EtwTraceDuplicateHandle @ 0x1409E22CC
 * Callers:
 *     ObDuplicateObject @ 0x1406ED5C0 (ObDuplicateObject.c)
 *     ObInheritObjectHandle @ 0x140706174 (ObInheritObjectHandle.c)
 *     ObCompleteObjectDuplication @ 0x14071134C (ObCompleteObjectDuplication.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExCheckSingleFilter @ 0x140462BFE (ExCheckSingleFilter.c)
 *     EtwpTraceKernelEventWithFilter @ 0x1405FC0F8 (EtwpTraceKernelEventWithFilter.c)
 */

void __fastcall EtwTraceDuplicateHandle(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  unsigned int v6; // edi
  unsigned int v7; // esi
  bool v8; // zf
  __int64 v9; // r15
  int v10; // r12d
  __int64 v11; // r8
  int v12; // ebx
  _WORD *v13; // r14
  __int64 v15; // [rsp+40h] [rbp-31h] BYREF
  int v16; // [rsp+48h] [rbp-29h]
  int v17; // [rsp+4Ch] [rbp-25h]
  int v18; // [rsp+50h] [rbp-21h]
  __int16 v19; // [rsp+54h] [rbp-1Dh]
  int v20; // [rsp+56h] [rbp-1Bh]
  __int64 v21; // [rsp+68h] [rbp-9h]
  __int64 v22; // [rsp+70h] [rbp-1h]
  __int64 v23; // [rsp+78h] [rbp+7h]
  _QWORD v24[2]; // [rsp+80h] [rbp+Fh] BYREF

  v21 = a3;
  v6 = 0;
  v7 = *(_DWORD *)(EtwpHostSiloState + 4248);
  v8 = !_BitScanForward((unsigned int *)&v9, v7);
  v10 = *(_DWORD *)(a6 + 192);
  v23 = a2;
  v22 = a1;
  if ( !v8 )
  {
    do
    {
      v7 &= v7 - 1;
      v11 = 32LL * (unsigned int)v9 + EtwpHostSiloState + 4284;
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 16) & 0x40) != 0 )
        {
          v12 = 0;
          v13 = (_WORD *)((char *)&EtwpObjectTypeFilter + 20 * v9);
          if ( *v13 )
          {
            while ( !(unsigned int)ExCheckSingleFilter(v10, *(_DWORD *)&v13[2 * v12 + 2]) )
            {
              if ( ++v12 >= (unsigned int)(unsigned __int16)*v13 )
                goto LABEL_9;
            }
            v6 |= 1 << v9;
          }
        }
      }
LABEL_9:
      v8 = !_BitScanForward((unsigned int *)&v9, v7);
    }
    while ( !v8 );
    if ( v6 )
    {
      v15 = v21;
      v16 = v22;
      v17 = v23;
      v20 = a4;
      v18 = a5;
      v19 = *(unsigned __int8 *)(a6 + 40);
      v24[0] = &v15;
      v24[1] = 26LL;
      EtwpTraceKernelEventWithFilter((__int64)v24, 1u, v6, 0x1122u, 0x10501903u);
    }
  }
}
