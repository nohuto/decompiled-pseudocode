/*
 * XREFs of KiIntSteerGetLineInformation @ 0x1402902B0
 * Callers:
 *     KiIntSteerConnect @ 0x14028FF2C (KiIntSteerConnect.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiIntSteerGetLineInformation(int *a1, int *a2, char *a3)
{
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // ebx
  char v9; // di
  __int64 result; // rax
  int v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = -1;
  v5 = *a1;
  v6 = 0;
  v9 = 1;
  if ( v5 )
  {
    if ( v5 != 3 )
      v6 = -1073741637;
  }
  else
  {
    v11 = a1[14];
    if ( (unsigned __int8)off_140C01B90[0]() )
    {
      v9 = 0;
      v6 = ((__int64 (__fastcall *)(int *, int *))off_140C01B78[0])(a1, &v11);
    }
    v4 = v11;
  }
  *a2 = v4;
  result = v6;
  *a3 = v9;
  return result;
}
