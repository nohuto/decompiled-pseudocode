/*
 * XREFs of PortPassThroughValidateNormalizedRequest @ 0x1C007E3CC
 * Callers:
 *     PortPassThroughValidate @ 0x1C007E2C8 (PortPassThroughValidate.c)
 * Callees:
 *     RtlULongAdd @ 0x1C0045F20 (RtlULongAdd.c)
 */

__int64 __fastcall PortPassThroughValidateNormalizedRequest(unsigned __int16 *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  char v4; // r11
  unsigned __int16 *v5; // r9
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r10
  ULONG v8; // eax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v12; // rcx
  char v13; // dl
  __int64 v14; // rax
  __int64 v15; // rax
  char v16; // al
  ULONG pulResult; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v4 = a3;
  pulResult = 0;
  v5 = a1;
  v6 = *(unsigned int *)(v3 + 16);
  v7 = *(unsigned int *)(v3 + 8);
  if ( *((_BYTE *)a1 + 6) > 0x10u )
    return 3221225485LL;
  v8 = *((unsigned __int8 *)a1 + 7);
  if ( (_BYTE)v8 )
  {
    if ( RtlULongAdd(*((_DWORD *)a1 + 8), v8, &pulResult) < 0 )
      return 3221225485LL;
    if ( *v5 > (unsigned int)v9 )
      return 3221225485LL;
    if ( !v4 )
    {
      if ( *((_DWORD *)v5 + 3) )
      {
        v10 = *((_QWORD *)v5 + 3);
        if ( v9 >= v10 || pulResult > v10 )
          return 3221225485LL;
      }
    }
    if ( (unsigned int)v9 > (unsigned int)v7 || pulResult > (unsigned int)v7 )
      return 3221225485LL;
  }
  if ( v4 )
  {
    if ( !*((_QWORD *)v5 + 3) && *((_DWORD *)v5 + 3) )
      return 3221225485LL;
  }
  else
  {
    v12 = *((_QWORD *)v5 + 3);
    if ( *v5 > v12 && *((_DWORD *)v5 + 3) )
      return 3221225485LL;
    v13 = *((_BYTE *)v5 + 8);
    if ( v13 != 1 )
    {
      v14 = *((unsigned int *)v5 + 3);
      if ( (_DWORD)v14 )
      {
        if ( v12 > v6 || v12 + v14 > v6 )
          return 3221225485LL;
      }
    }
    if ( v13 )
    {
      v15 = *((unsigned int *)v5 + 3);
      if ( (_DWORD)v15 )
      {
        if ( v12 > v7 || v12 + v15 > v7 )
          return 3221225485LL;
      }
    }
  }
  if ( (unsigned int)(*((_DWORD *)v5 + 4) - 1) > 0x1A5DF )
    return 3221225485LL;
  v16 = *((_BYTE *)v5 + 36);
  if ( v16 == 24 || (unsigned __int8)(v16 - 57) <= 1u )
    return 3221225488LL;
  else
    return 0LL;
}
