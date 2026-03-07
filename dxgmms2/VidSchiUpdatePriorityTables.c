_BOOL8 __fastcall VidSchiUpdatePriorityTables(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // r9d
  _BOOL8 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v7 = 0;
  if ( a2 )
  {
    VidSchiInsertCommandToSoftwareQueue(a2, &v7);
    v3 = v7;
  }
  result = *(_DWORD *)(a1 + 720) != 0;
  if ( a3 )
    *a3 = v3;
  return result;
}
