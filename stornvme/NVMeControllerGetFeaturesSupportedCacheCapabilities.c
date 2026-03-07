__int64 __fastcall NVMeControllerGetFeaturesSupportedCacheCapabilities(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1840);
  if ( (*(_BYTE *)(v2 + 525) & 1) != 0
    && (*(_WORD *)(a1 + 194) > 1u || *(_BYTE *)(a1 + 193))
    && (*(_BYTE *)(v2 + 520) & 0x10) != 0 )
  {
    LocalCommandReuse(a1, a1 + 944);
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~4u;
    *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
    v3 = *(_QWORD *)(a1 + 1040);
    *(_BYTE *)(v3 + 4136) = 6;
    v4 = *(_DWORD *)(v3 + 4136);
    *(_BYTE *)(v3 + 4096) = 10;
    *(_DWORD *)(v3 + 4136) = v4 & 0xFFFFF8FF | 0x300;
    *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4224LL) = NVMeGetFeaturesSupportedCacheCapabilitiesCompletion;
    ProcessCommand(a1, a1 + 952);
    result = WaitForCommandCompleteWithCustomTimeout(a1);
    if ( *(_BYTE *)(a1 + 955) != 1 )
      *(_BYTE *)(a1 + 4236) &= ~4u;
  }
  return result;
}
