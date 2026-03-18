/*
 * XREFs of MulProcessChildRedirectionDfbSurfaces @ 0x1C02A4E50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026AD30 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall MulProcessChildRedirectionDfbSurfaces(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned int v5; // ebx
  _QWORD *v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  _BYTE v12[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v12);
  LOBYTE(v2) = 5;
  v3 = HmgShareLock(a1, v2);
  v13 = v3;
  v4 = 0LL;
  v5 = 1;
  v6 = *(_QWORD **)(v3 + 24);
  v7 = *v6;
  if ( *(_DWORD *)(*v6 + 16LL) )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v6[1] + 8 * v4);
      v9 = *(_DWORD *)(v8 + 92);
      v10 = v8 - 24;
      if ( (v9 & 1) != 0 && !pProcessDfbSurfacesInternal(v10, 1LL) )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *(_DWORD *)(v7 + 16) )
        goto LABEL_7;
    }
    v5 = 0;
LABEL_7:
    v3 = v13;
  }
  if ( v3 )
    DEC_SHARE_REF_CNT(v3);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v12);
  return v5;
}
