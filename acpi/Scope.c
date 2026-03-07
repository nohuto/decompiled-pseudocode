__int64 __fastcall Scope(_QWORD *a1, __int64 *a2)
{
  __int64 result; // rax

  result = GetNameSpaceObject(*(_BYTE **)(a2[10] + 32), a1[10], (__int64)(a2 + 8), 0x80000000);
  if ( !(_DWORD)result )
    return PushScope(a1, a1[15], a2[5], 0LL, a2[8], a1[11], a1[40], a2[11]);
  return result;
}
