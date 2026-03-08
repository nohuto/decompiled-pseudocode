/*
 * XREFs of RtlCharToInteger @ 0x140811070
 * Callers:
 *     IopCheckDiskName @ 0x140386144 (IopCheckDiskName.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140B4E30C (EmpParseTargetRuleStringIndexList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlCharToInteger(PCSZ String, ULONG Base, PULONG Value)
{
  ULONG v4; // r10d
  PCSZ v5; // r9
  char v6; // r11
  char *v7; // r9
  char v8; // cl
  char *v9; // rax
  int v10; // edx
  int v11; // r8d
  unsigned int v12; // eax
  ULONG v13; // eax
  PCSZ v15; // rcx
  char *v16; // r9

  v4 = Base;
  v5 = String;
  v6 = *String;
  if ( *String <= 32 )
  {
    while ( 1 )
    {
      v15 = v5++;
      if ( !*v5 )
        break;
      v6 = *v5;
      if ( *v5 > 32 )
        goto LABEL_2;
    }
    v7 = (char *)v15;
  }
  else
  {
LABEL_2:
    v7 = (char *)(v5 + 1);
  }
  v8 = v6;
  if ( ((v6 - 43) & 0xFD) == 0 )
    v8 = *v7++;
  v9 = v7;
  switch ( Base )
  {
    case 0u:
      v10 = 0;
      v4 = 10;
      if ( v8 != 48 )
        break;
      v8 = *v7;
      v16 = v7 + 1;
      switch ( v8 )
      {
        case 'x':
          v10 = 4;
          v4 = 16;
          break;
        case 'o':
          v10 = 3;
          v4 = 8;
          break;
        case 'b':
          v10 = 1;
          v4 = 2;
          break;
        default:
          v16 = v9;
          goto LABEL_39;
      }
      v8 = *v16;
LABEL_39:
      v7 = v16 + 1;
      break;
    case 0x10u:
      v10 = 4;
      break;
    case 0xAu:
      v10 = 0;
      break;
    case 2u:
      v10 = 1;
      break;
    case 8u:
      v10 = 3;
      break;
    default:
      return -1073741811;
  }
  v11 = 0;
  while ( v8 )
  {
    if ( (unsigned __int8)(v8 - 48) > 9u )
    {
      if ( (unsigned __int8)(v8 - 65) > 5u )
      {
        if ( (unsigned __int8)(v8 - 97) > 5u )
          break;
        v12 = v8 - 87;
      }
      else
      {
        v12 = v8 - 55;
      }
    }
    else
    {
      v12 = v8 - 48;
    }
    if ( v12 >= v4 )
      break;
    if ( v10 )
      v11 = v12 | (v11 << v10);
    else
      v11 = v12 + v4 * v11;
    v8 = *v7++;
  }
  v13 = -v11;
  if ( v6 != 45 )
    v13 = v11;
  *Value = v13;
  return 0;
}
