struct VIDSCH_HW_CONTEXT *__fastcall VidSchCreateHwContext(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r11
  struct _VIDSCH_DEVICE *v4; // r9
  struct DXGCONTEXT *v5; // r10

  v2 = VidSchiDriverNodeEngineToSchedulerNode(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 800LL) + 32LL),
         *(_DWORD *)(a2 + 4),
         *(_DWORD *)(a2 + 8));
  *(_DWORD *)(v3 + 4) = v2;
  return VidSchiCreateHwContextInternal(v4, (struct _VIDSCH_CONTEXT_DATA *)v3, v5);
}
