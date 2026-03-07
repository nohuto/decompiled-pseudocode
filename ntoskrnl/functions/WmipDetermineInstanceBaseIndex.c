__int64 __fastcall WmipDetermineInstanceBaseIndex(_QWORD *a1, char *a2)
{
  unsigned int v4; // edi
  volatile signed __int64 *GEByGuid; // rax
  volatile signed __int64 *v6; // r11
  __int64 *v7; // r8
  __int64 *i; // rdx
  int v9; // r10d
  int v10; // ecx
  unsigned __int16 *v11; // rax
  _DWORD *v12; // rbx

  v4 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  GEByGuid = WmipFindGEByGuid(a1, 0);
  v6 = GEByGuid;
  if ( GEByGuid )
  {
    v7 = (__int64 *)(GEByGuid + 7);
    for ( i = (__int64 *)*((_QWORD *)GEByGuid + 7); i != v7; i = (__int64 *)*i )
    {
      if ( (i[2] & 1) != 0 )
      {
        v12 = (_DWORD *)i[11];
        v11 = (unsigned __int16 *)a2;
        do
        {
          v9 = *(unsigned __int16 *)((char *)v11 + (char *)(v12 + 1) - a2);
          v10 = *v11 - v9;
          if ( v10 )
            break;
          ++v11;
        }
        while ( v9 );
        if ( !v10 && v4 <= *v12 + *((_DWORD *)i + 18) )
          v4 = *v12 + *((_DWORD *)i + 18);
      }
    }
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, v6);
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  return v4;
}
