_BOOL8 __fastcall CmpFlushNotifiesPreCallback(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(a1 + 40) == -1 || *(_BYTE *)(a2 + 4) == 0;
}
