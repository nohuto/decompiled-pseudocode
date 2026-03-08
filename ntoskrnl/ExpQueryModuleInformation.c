/*
 * XREFs of ExpQueryModuleInformation @ 0x1407A3330
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlUnicodeStringToAnsiString @ 0x1407A34D0 (RtlUnicodeStringToAnsiString.c)
 */

__int64 __fastcall ExpQueryModuleInformation(__int64 a1, _DWORD *a2, unsigned int a3, unsigned int *a4)
{
  int v6; // r15d
  unsigned int v7; // r10d
  unsigned int v8; // ebx
  _DWORD *v9; // rdi
  PVOID *i; // r14
  unsigned int v11; // eax
  NTSTATUS v12; // eax
  char *v13; // rax
  STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF

  DestinationString = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 8;
  v9 = a2 + 2;
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    v11 = v8 + 296;
    if ( v8 + 296 < v8 )
      return 3221225473LL;
    v8 += 296;
    if ( a3 >= v11 )
    {
      *((_QWORD *)v9 + 2) = i[6];
      v9[6] = *((_DWORD *)i + 16);
      v9[7] = *((_DWORD *)i + 26);
      *((_WORD *)v9 + 18) = *((_WORD *)i + 54);
      *((_WORD *)v9 + 16) = v6;
      *((_WORD *)v9 + 17) = 0;
      DestinationString.Buffer = (char *)(v9 + 10);
      *(_DWORD *)&DestinationString.Length = 0x1000000;
      v12 = RtlUnicodeStringToAnsiString(&DestinationString, (PCUNICODE_STRING)(i + 9), 0);
      v7 = v12;
      if ( (int)(v12 + 0x80000000) < 0 || v12 == -2147483643 )
      {
        v13 = &DestinationString.Buffer[DestinationString.Length];
        while ( v13 > DestinationString.Buffer )
        {
          if ( !*--v13 )
            break;
          if ( *v13 == 92 )
          {
            LOWORD(v13) = (_WORD)v13 + 1;
            break;
          }
        }
        *((_WORD *)v9 + 19) = (_WORD)v13 - LOWORD(DestinationString.Buffer);
      }
      else
      {
        *((_BYTE *)v9 + 40) = 0;
        *((_WORD *)v9 + 19) = 0;
      }
      v9 += 74;
    }
    else
    {
      if ( a4 )
        *a4 = v11;
      v7 = -1073741820;
    }
    ++v6;
  }
  if ( a4 )
    *a4 = v8;
  if ( a3 < 8 )
    return (unsigned int)-1073741820;
  else
    *a2 = v6;
  return v7;
}
