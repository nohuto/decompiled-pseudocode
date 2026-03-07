__int64 __fastcall FindFirstHWRenderAdapter(struct DXGADAPTER *a1, void *a2)
{
  __int64 v3; // r8
  int v4; // edx

  v3 = **((_QWORD **)a2 + 1);
  if ( (!v3 || (*(_DWORD *)(v3 + 436) & 1) == 0)
    && *((_DWORD *)a1 + 50) == 1
    && (g_VgpuReplaceWarp || !*((_BYTE *)a1 + 209)) )
  {
    v4 = *((_DWORD *)a1 + 698);
    if ( (v4 & 4) == 0
      && !*((_BYTE *)a1 + 2833)
      && (*((_BYTE *)a1 + 2891) & 1) != 0
      && (*((_DWORD *)a1 + 109) & 0x10) == 0
      && (v4 & 8) == 0 )
    {
      DXGADAPTER_REFERENCE::Assign(*((DXGADAPTER ***)a2 + 1), a1);
    }
  }
  return 0LL;
}
