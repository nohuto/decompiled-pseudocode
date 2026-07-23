/*
 * XREFs of RtlpHpSegMgrRelease @ 0x140389CA4
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x140222154 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegSegmentFree @ 0x140389C1C (RtlpHpSegSegmentFree.c)
 * Callees:
 *     RtlpHpQueryVA @ 0x1402230E4 (RtlpHpQueryVA.c)
 *     RtlpHpFreeVA @ 0x1403054C0 (RtlpHpFreeVA.c)
 *     RtlpHpSegMgrCommit @ 0x140315360 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x140594E60 (RtlpHpSegMgrVaCtxFree.c)
 */

char __fastcall RtlpHpSegMgrRelease(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 v6; // rax
  _WORD *v7; // r14
  unsigned __int64 v8; // r15
  unsigned int v9; // edi
  __int128 v11; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v12; // [rsp+80h] [rbp+30h] BYREF
  _WORD *v13; // [rsp+88h] [rbp+38h] BYREF
  __int64 v14; // [rsp+98h] [rbp+48h] BYREF

  LODWORD(v6) = *(_DWORD *)a1;
  v3 = a2;
  v13 = 0LL;
  v14 = a2;
  v4 = (unsigned int)-(int)v6;
  LOBYTE(v6) = *(_BYTE *)(a1 + 13) & 7;
  v12 = v4;
  if ( !(_BYTE)v6 )
  {
LABEL_2:
    if ( v3 )
    {
      v11 = *(_OWORD *)(a1 + 40);
      LOBYTE(v6) = RtlpHpFreeVA((unsigned __int64 *)&v14, &v12, 0x8000LL, &v11);
    }
    return v6;
  }
  if ( v4 >= 0x200000 )
  {
LABEL_10:
    v11 = *(_OWORD *)(a1 + 40);
    LOBYTE(v6) = RtlpHpQueryVA(v3, &v11, &v13, 0LL);
    v7 = v13;
    v8 = (unsigned __int64)&v13[v4 >> 21];
    v9 = 0;
    if ( (unsigned __int64)v13 < v8 )
    {
      do
      {
        LOWORD(v6) = *v7;
        if ( (*v7 & 0x7FF) != 0 )
          LOBYTE(v6) = RtlpHpSegMgrCommit(a1, v3, v9, 512, -(v6 & 0x7FF), 0x4000, 0);
        ++v7;
        v9 += 512;
      }
      while ( (unsigned __int64)v7 < v8 );
    }
    goto LABEL_2;
  }
  if ( a3 > 0 )
    RtlpHpSegMgrCommit(a1, a2, 0, (unsigned int)v4 >> 12, -a3, 0x4000, 0);
  v6 = RtlpHpSegMgrVaCtxFree(a1, v3, &v12);
  v14 = v6;
  v3 = v6;
  if ( v6 )
  {
    v4 = v12;
    goto LABEL_10;
  }
  return v6;
}
