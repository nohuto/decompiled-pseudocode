__int64 __fastcall SetKeyboardRate(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 result; // rax

  v1 = a1;
  v2 = SGDGetUserSessionState(a1);
  v4 = SGDGetUserSessionState(v3);
  LOWORD(v4) = *(_WORD *)(SGDGetUserSessionState(v5) + 12586)
             + (v1 & 0x1F) * (*(unsigned __int16 *)(v2 + 12592) - *(unsigned __int16 *)(v4 + 12586)) / 0x1F;
  *(_WORD *)(SGDGetUserSessionState(v6) + 12606) = v4;
  v8 = SGDGetUserSessionState(v7);
  v10 = SGDGetUserSessionState(v9);
  v12 = SGDGetUserSessionState(v11);
  v13 = *(unsigned __int16 *)(v10 + 12588);
  LOWORD(v10) = *(_WORD *)(v12 + 12588) + ((v1 >> 5) & 3) * (*(unsigned __int16 *)(v8 + 12594) - (_DWORD)v13) / 3;
  *(_WORD *)(SGDGetUserSessionState(v13) + 12608) = v10;
  result = SGDGetUserSessionState(v14);
  *(_DWORD *)(result + 12616) |= 1u;
  return result;
}
