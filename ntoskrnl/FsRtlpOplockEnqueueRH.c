/*
 * XREFs of FsRtlpOplockEnqueueRH @ 0x14023FA34
 * Callers:
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x14023AB60 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpRequestShareableOplock @ 0x14023EEF0 (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     FsRtlpOplockDequeueRH @ 0x14023EA10 (FsRtlpOplockDequeueRH.c)
 *     IoSetOplockPrivateFoExt @ 0x14023FA98 (IoSetOplockPrivateFoExt.c)
 */

__int64 __fastcall FsRtlpOplockEnqueueRH(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  int v5; // r11d
  _OWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  _QWORD *v9; // [rsp+48h] [rbp-10h]

  v2 = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 )
    __fastfail(3u);
  *a2 = v2;
  a2[1] = a1;
  *(_QWORD *)(v2 + 8) = a2;
  *a1 = (__int64)a2;
  v4 = a2[3];
  v8 = 0LL;
  v9 = a2;
  memset(v7, 0, sizeof(v7));
  v5 = IoSetOplockPrivateFoExt(v4, v7);
  if ( v5 < 0 )
    FsRtlpOplockDequeueRH((__int64)a2);
  return (unsigned int)v5;
}
