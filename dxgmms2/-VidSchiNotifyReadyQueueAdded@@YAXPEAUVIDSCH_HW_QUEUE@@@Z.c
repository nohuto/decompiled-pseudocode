// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiNotifyReadyQueueAdded(struct VIDSCH_HW_QUEUE *a1)
{
  __int64 v1; // rdx
  int v2; // eax
  __int64 v3; // rbx
  void (__fastcall *v4)(_QWORD); // rax

  v1 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  v2 = *(_DWORD *)(v1 + 1712);
  v3 = *(_QWORD *)(v1 + 24);
  if ( v2 == -1 || *(_DWORD *)(v3 + 68) == -1 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 28672LL, a1, v1, 0LL);
    __debugbreak();
    JUMPOUT(0x1C001D19BLL);
  }
  *(_DWORD *)(v1 + 1712) = v2 + 1;
  if ( !*((_BYTE *)a1 + 144) )
    ++*(_DWORD *)(v1 + 1716);
  ++*(_DWORD *)(v3 + 68);
  if ( *(_DWORD *)(v1 + 1712) == 1 && *(_DWORD *)(v1 + 11272) != -1 )
  {
    v4 = *(void (__fastcall **)(_QWORD))(v3 + 3080);
    if ( v4 )
      v4(*(_QWORD *)(v3 + 3120));
  }
  if ( *(_DWORD *)(v3 + 68) == 1 )
  {
    *(_QWORD *)(v3 + 1224) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v3 + 1192), 0, 0);
  }
}
