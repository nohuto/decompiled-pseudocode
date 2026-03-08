/*
 * XREFs of PopFxAcpiValidateParameters @ 0x14059EBFC
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x14059E614 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopFxAcpiValidateParameters(__int64 a1)
{
  char v1; // r8
  unsigned __int16 **v3; // r10
  unsigned __int64 v4; // r9
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  bool v8; // cf
  bool v9; // cf
  unsigned __int16 *v10; // rax
  __int64 v11; // rcx
  unsigned __int16 *v12; // rax
  __int64 v13; // rcx

  v1 = 0;
  if ( !a1 )
    return v1;
  v3 = *(unsigned __int16 ***)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  if ( !v3 || !v4 )
    return v1;
  v5 = *(_DWORD *)a1 - 1;
  if ( !v5 )
  {
    if ( v4 >= 0x18 )
    {
      v12 = *v3;
      if ( *v3 )
      {
        if ( *((_QWORD *)v12 + 1) )
        {
          v13 = *v12;
          if ( (unsigned int)v13 >= 4 )
            return v12[1] >= (unsigned __int64)(v13 + 2);
        }
      }
    }
    return v1;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v9 = v4 < 0x10;
LABEL_12:
    if ( v9 )
      return v1;
    v10 = *v3;
    if ( !*v3 )
      return v1;
    if ( !*((_QWORD *)v10 + 1) )
      return v1;
    v11 = *v10;
    if ( (unsigned int)v11 < 4 )
      return v1;
    v8 = v10[1] < (unsigned __int64)(v11 + 2);
    goto LABEL_17;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v9 = v4 < 0x28;
    goto LABEL_12;
  }
  if ( v7 != 1 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 824LL) & 4) != 0 )
      return 1;
    return v1;
  }
  v8 = v4 < 0x10;
LABEL_17:
  if ( !v8 )
    return 1;
  return v1;
}
