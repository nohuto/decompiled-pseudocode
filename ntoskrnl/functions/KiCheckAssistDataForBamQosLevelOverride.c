__int64 __fastcall KiCheckAssistDataForBamQosLevelOverride(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( *a2 )
  {
    v2 = *(_QWORD *)(a1 + 968);
    if ( v2 )
    {
      result = *(unsigned int *)(v2 + 28);
      if ( *(_QWORD *)(v2 + 28) || (*(_DWORD *)(v2 + 20) & 0x4000) != 0 )
        *a2 = 0;
    }
  }
  return result;
}
