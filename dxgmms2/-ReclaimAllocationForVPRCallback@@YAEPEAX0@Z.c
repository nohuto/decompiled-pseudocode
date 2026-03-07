unsigned __int8 __fastcall ReclaimAllocationForVPRCallback(void *a1, _QWORD *a2)
{
  _QWORD *v2; // rcx
  VIDMM_GLOBAL *v4; // rbx

  v2 = (_QWORD *)a2[15];
  v4 = (VIDMM_GLOBAL *)v2[1];
  (*(void (__fastcall **)(_QWORD *, _QWORD *, _QWORD, _QWORD, _QWORD))(*v2 + 24LL))(
    v2,
    a2,
    a2[17],
    a2[2],
    *(_QWORD *)a2[64]);
  a2[17] = 0LL;
  *((_DWORD *)a2 + 28) = 1;
  VIDMM_GLOBAL::NotifyAllocationReclaimed(v4, (struct _VIDMM_GLOBAL_ALLOC *)a2, 0);
  return 1;
}
