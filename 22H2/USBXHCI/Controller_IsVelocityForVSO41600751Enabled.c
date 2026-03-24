/*
 * XREFs of Controller_IsVelocityForVSO41600751Enabled @ 0x1C001A0C0
 * Callers:
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C003701C (XilEndpoint_AllocateStreamContextArray.c)
 * Callees:
 *     <none>
 */

bool __fastcall Controller_IsVelocityForVSO41600751Enabled(__int64 a1)
{
  int v1; // ecx
  int v2; // ecx
  bool result; // al

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 80LL) - 1;
  result = 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      if ( v2 != 2 )
        return 0;
    }
  }
  return result;
}
