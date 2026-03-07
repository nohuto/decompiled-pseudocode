void __fastcall VIDMM_GLOBAL::BucketizeBudgetStateProcesses(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3)
{
  char *v3; // rdi
  char *i; // rbx
  __int64 v8; // r9
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  char *v10; // rdx
  struct VIDMM_SEGMENT_GROUP_STATE *v11; // r9
  char *v12; // rcx
  char **v13; // rax

  v3 = (char *)this + 41120;
  for ( i = (char *)*((_QWORD *)this + 5140); i != v3; i = *(char **)i )
  {
    v8 = *((_QWORD *)i + 2);
    if ( *(_QWORD *)(v8 + 32) && (VIDMM_PROCESS *)v8 != g_pVidMmSystemProcess )
    {
      SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(this, a2, a3, *(struct VIDMM_PARTITION **)(v8 + 288));
      v10 = i + 384;
      v11 = SegmentGroupState;
      v12 = (char *)SegmentGroupState + 16 * *((int *)i + 94) + 144;
      v13 = (char **)*((_QWORD *)v12 + 1);
      if ( *v13 != v12 )
        __fastfail(3u);
      *((_QWORD *)i + 49) = v13;
      *(_QWORD *)v10 = v12;
      *v13 = v10;
      *((_QWORD *)v12 + 1) = v10;
      *((_DWORD *)v11 + *((int *)i + 94) + 81) += dword_1C00652F8[*((int *)i + 92)];
    }
  }
}
