/*
 * XREFs of BcpDisplayCriticalCharacter @ 0x14066FC60
 * Callers:
 *     BcpDisplayErrorInformation @ 0x140670094 (BcpDisplayErrorInformation.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140670AE4 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x14066F654 (BgpDisplayCharacterEx.c)
 */

__int64 __fastcall BcpDisplayCriticalCharacter(__int16 a1, int a2)
{
  int v2; // esi
  unsigned int v3; // r8d
  int v4; // ebx
  unsigned int v5; // r9d
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 result; // rax
  int v9; // edx
  unsigned __int64 v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF

  LOWORD(v11) = a1;
  v2 = BcpCursor;
  v3 = BcpCursor;
  v4 = HIDWORD(BcpCursor);
  v5 = HIDWORD(BcpCursor);
  v12 = 0;
  v6 = *(_QWORD *)(qword_140C70820 + 24);
  v11 = 0;
  v7 = dword_140C646C0;
  *(_DWORD *)(v6 + 56) = a2;
  *(_DWORD *)(qword_140C70820 + 8) = a2;
  result = BgpDisplayCharacterEx(0x20u, (__int64 *)qword_140C70820, v3, v5, *(_DWORD *)(v6 + 40), -1, &v12, &v11, v10);
  if ( (int)result >= 0 )
  {
    v9 = v4 + v11;
    HIDWORD(BcpCursor) = v4;
    LODWORD(BcpCursor) = v2 + v12;
    if ( v7 >= v4 + v11 )
      v9 = v7;
    dword_140C646C0 = v9;
  }
  return result;
}
