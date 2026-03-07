__int64 __fastcall CreateVmBusChannel(void *a1, struct _GUID *a2, const struct _GUID *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  struct _UNICODE_STRING v6; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+50h] [rbp-18h]

  v8 = *(_DWORD *)L"l";
  v6.Buffer = (wchar_t *)&v7;
  v7 = *(_OWORD *)L"DXGK_Vail";
  *(_QWORD *)&v6.Length = 1310738LL;
  v3 = DXGVMBUSCHANNEL::Create(a1, a2, a3, &v6, a1 != 0LL, (struct DXGVMBUSCHANNEL **)a2);
  v4 = v3;
  if ( v3 < 0 )
    WdLogSingleEntry1(3LL, v3);
  return v4;
}
