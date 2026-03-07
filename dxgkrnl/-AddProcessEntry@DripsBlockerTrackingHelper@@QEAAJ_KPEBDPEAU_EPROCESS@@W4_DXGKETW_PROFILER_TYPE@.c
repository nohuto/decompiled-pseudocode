__int64 __fastcall DripsBlockerTrackingHelper::AddProcessEntry(
        DripsBlockerTrackingHelper *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int ProcessEntry; // edi
  unsigned int v11; // esi
  unsigned int v12; // ebp
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // r8
  const wchar_t *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v20[3]; // [rsp+44h] [rbp-24h] BYREF
  int v21; // [rsp+70h] [rbp+8h] BYREF

  *((_BYTE *)a1 + 302129) = 0;
  DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry(a1);
  if ( !*((_BYTE *)a1 + 302080) )
    return 0LL;
  v20[0] = 0;
  v19 = 0;
  LOBYTE(v21) = 0;
  ProcessEntry = DripsBlockerTrackingHelper::DoGetProcessEntry(a1, a2, a3, a4, a5, v20, &v19, &v21);
  if ( ProcessEntry >= 0 && !(_BYTE)v21 )
  {
    v11 = v19;
    v12 = v20[0];
    v13 = 4720LL * v20[0];
    v14 = v13 + 72LL * v19;
    v15 = v13 + 72 * (v19 + 2LL);
    ++*(_DWORD *)((char *)a1 + v15);
    ++*(_DWORD *)((char *)a1 + v14 + 148);
    *(_DWORD *)((char *)a1 + v14 + 176) += *((_BYTE *)a1 + 302104) != 0;
    if ( *(_DWORD *)((char *)a1 + v15) == 1 )
    {
      DripsBlockerTrackingHelper::EnableEntryAccounting(a1, v12, v11, 1);
      if ( bTracingEnabled )
      {
        v21 = 0;
        v16 = (const wchar_t *)DripsBlockerTrackingHelper::EtwProfilerTypeName(
                                 *(unsigned int *)((char *)a1 + v14 + 172),
                                 &v21);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0qqsz_EtwWriteTransfer((__int64)a1 + v13 + 8, v17, v18, v12, v11, (const char *)a1 + v13 + 8, v16);
      }
    }
  }
  return (unsigned int)ProcessEntry;
}
