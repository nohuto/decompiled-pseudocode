__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TouchTopology(CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this)
{
  const WCHAR *v2; // rdx
  NTSTATUS v3; // eax
  unsigned int v4; // edi
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = (const WCHAR *)*((_QWORD *)this + 8);
  v6 = MEMORY[0xFFFFF78000000014];
  v3 = RtlWriteRegistryValue(0x40000000u, v2, L"Timestamp", 0xBu, &v6, 8u);
  v4 = v3;
  if ( v3 < 0 )
    WdLogSingleEntry5(2LL, v3, SHIDWORD(v6), (unsigned int)v6, *((int *)this + 15), *((unsigned int *)this + 14));
  else
    *((_QWORD *)this + 7) = v6;
  return v4;
}
