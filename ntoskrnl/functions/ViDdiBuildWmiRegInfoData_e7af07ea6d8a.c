__int64 __fastcall ViDdiBuildWmiRegInfoData(int a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // edi
  __int64 v5; // rdx

  if ( a2 )
  {
    *(_DWORD *)(a2 + 16) = 1;
    *(_DWORD *)(a2 + 40) = 0;
    *(_DWORD *)(a2 + 44) = 0;
    *(_QWORD *)(a2 + 48) = 0LL;
    *(GUID *)(a2 + 24) = GUID_VERIFIER_WMI_INTERFACE;
  }
  result = 56LL;
  if ( !a1 )
  {
    if ( a2 )
    {
      *(_DWORD *)(a2 + 8) = 56;
      *(_WORD *)(a2 + 56) = ViDdiWmiMofKey.Length;
      *(_WORD *)(a2 + 58) = ViDdiWmiMofKey.Length;
      *(_QWORD *)(a2 + 64) = a2 + 72;
      memmove((void *)(a2 + 72), ViDdiWmiMofKey.Buffer, ViDdiWmiMofKey.Length);
    }
    v4 = (ViDdiWmiMofKey.Length + 73) & 0xFFFFFFFE;
    if ( a2 )
    {
      *(_DWORD *)(a2 + 12) = v4;
      v5 = a2 + v4;
      *(_WORD *)v5 = ViDdiWmiMofResourceName.Length;
      *(_WORD *)(v5 + 2) = ViDdiWmiMofResourceName.Length;
      *(_QWORD *)(v5 + 8) = v5 + 16;
      memmove((void *)(v5 + 16), ViDdiWmiMofResourceName.Buffer, ViDdiWmiMofResourceName.Length);
    }
    result = v4 + ViDdiWmiMofResourceName.Length + 16;
  }
  if ( a2 )
  {
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = result;
  }
  return result;
}
