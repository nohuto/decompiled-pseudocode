_BOOL8 __fastcall IsSysShadow(__int64 a1)
{
  return **(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL) == (unsigned __int16)gatomShadow;
}
