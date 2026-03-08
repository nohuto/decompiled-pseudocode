/*
 * XREFs of SfnOUTCBOXSTRING @ 0x1C014A8F0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ClientGetListboxString @ 0x1C020833C (ClientGetListboxString.c)
 */

__int64 __fastcall SfnOUTCBOXSTRING(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v12; // rcx
  __int64 result; // rax
  int v14; // ebx
  unsigned int ListboxString; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int128 v19; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20; // [rsp+60h] [rbp-28h]

  v19 = 0LL;
  v20 = 0LL;
  if ( a1 )
    v12 = *a1;
  else
    LODWORD(v12) = 0;
  result = HMValidateHandleNoSecure(v12, 1);
  if ( result )
  {
    v14 = *(_DWORD *)(a1[5] + 28);
    ThreadLock(a1, &v19);
    ListboxString = ClientGetListboxString(
                      a1,
                      a2,
                      a3,
                      a4,
                      a5,
                      a6,
                      a7,
                      ((v14 & 0x200) == 0) & (unsigned __int8)((v14 & 0x30) != 0),
                      a8);
    ThreadUnlock1(v17, v16, v18);
    return ListboxString;
  }
  return result;
}
