/*
 * XREFs of MulProcessChildRedirectionDfbSurfaces @ 0x1C02A7420
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026CF90 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall MulProcessChildRedirectionDfbSurfaces(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned int v6; // ebx
  _QWORD *v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  _BYTE v13[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v13);
  LOBYTE(v2) = 5;
  v3 = HmgShareLock(a1, v2);
  v14 = v3;
  v5 = 0LL;
  v6 = 1;
  v7 = *(_QWORD **)(v3 + 24);
  v8 = *v7;
  if ( *(_DWORD *)(*v7 + 16LL) )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v7[1] + 8 * v5);
      v10 = *(_DWORD *)(v9 + 92);
      v11 = v9 - 24;
      if ( (v10 & 1) != 0 && !pProcessDfbSurfacesInternal(v11, 1LL) )
        break;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *(_DWORD *)(v8 + 16) )
        goto LABEL_7;
    }
    v6 = 0;
LABEL_7:
    v3 = v14;
  }
  if ( v3 )
    DEC_SHARE_REF_CNT(v3, v4);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v13);
  return v6;
}
