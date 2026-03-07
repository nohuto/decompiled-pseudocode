bool __fastcall DpiIsRfxVgpuDevice(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 64);
  return v1
      && *(_DWORD *)(v1 + 16) == 1953656900
      && (unsigned int)(*(_DWORD *)(v1 + 20) - 2) <= 1
      && *(_BYTE *)(v1 + 2694) != 0;
}
