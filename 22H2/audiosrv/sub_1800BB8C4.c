/*
 * XREFs of sub_1800BB8C4 @ 0x1800BB8C4
 * Callers:
 *     sub_1800BC7E0 @ 0x1800BC7E0 (sub_1800BC7E0.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800BB8C4(__int64 a1, _OWORD *a2)
{
  int ObjectProperties; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v9; // [rsp+40h] [rbp-19h]
  __int128 v10; // [rsp+50h] [rbp-9h]

  ObjectProperties = DevGetObjectProperties(1LL, a1, 0LL);
  if ( ObjectProperties >= 0 )
  {
    if ( v9 < 2 || MEMORY[0x10] != 4 )
      return (unsigned int)-2147024894;
    v4 = MEMORY[0] - 0x414BB814026E516ELL;
    if ( MEMORY[0] == 0x414BB814026E516ELL )
      v4 = MEMORY[8] - 0x2248EF6F6D85CD83LL;
    if ( v4 || MEMORY[0x20] != 13 || MEMORY[0x24] != 16 )
      return (unsigned int)-2147024894;
    v5 = *MEMORY[0x28] - 0x480033FA2EEF81BELL;
    v10 = *MEMORY[0x28];
    if ( *MEMORY[0x28] == 0x480033FA2EEF81BELL )
      v5 = *((_QWORD *)&v10 + 1) - 0x3F2C9774D41C7096LL;
    if ( !v5 )
      goto LABEL_15;
    v6 = *MEMORY[0x28] - 0x4949DCECE6327CADLL;
    if ( *MEMORY[0x28] == 0x4949DCECE6327CADLL )
      v6 = *((_QWORD *)&v10 + 1) + 0x2D869568E1667552LL;
    if ( v6 )
    {
      return (unsigned int)-2147024894;
    }
    else
    {
LABEL_15:
      if ( MEMORY[0x40] != 2 )
        return (unsigned int)-2147023728;
      v7 = MEMORY[0x30] - 0x48273F8A8C7ED206LL;
      if ( MEMORY[0x30] == 0x48273F8A8C7ED206LL )
        v7 = MEMORY[0x38] - 0x6CFCAE1F9EAEABB3LL;
      if ( !v7 && MEMORY[0x50] == 13 && MEMORY[0x54] == 16 )
      {
        ObjectProperties = 0;
        *a2 = *MEMORY[0x58];
      }
      else
      {
        return (unsigned int)-2147023728;
      }
    }
  }
  return (unsigned int)ObjectProperties;
}
