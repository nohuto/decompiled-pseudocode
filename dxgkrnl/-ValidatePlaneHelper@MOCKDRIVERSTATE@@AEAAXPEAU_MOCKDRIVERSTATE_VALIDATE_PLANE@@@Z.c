void __fastcall MOCKDRIVERSTATE::ValidatePlaneHelper(DXGADAPTER **this, struct _MOCKDRIVERSTATE_VALIDATE_PLANE *a2)
{
  DXGADAPTER *v4; // r8
  DXGADAPTER *v5; // rax
  __int64 v6; // r9
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rcx
  struct DXGADAPTER *v12; // r9
  __int64 v13; // r11
  DXGADAPTER *v14; // [rsp+20h] [rbp-28h]

  if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(this[3]) )
    return;
  v4 = *this;
  if ( *((_BYTE *)*this + 8) )
    return;
  v5 = this[3];
  v6 = 0LL;
  v7 = *((_DWORD *)v5 + 418);
  v8 = *((_DWORD *)v5 + 690);
  if ( !*(_DWORD *)a2 )
    return;
  while ( *((_BYTE *)a2 + 16) )
  {
    v9 = *((_QWORD *)v4
         + 20 * *(unsigned int *)(*((_QWORD *)a2 + 3) + 4 * v6)
         + 2 * *(unsigned int *)(*((_QWORD *)a2 + 4) + 4 * v6)
         + 7);
    if ( v9 && *(_QWORD *)(*((_QWORD *)a2 + 1) + 8 * v6) == v9 )
    {
      v10 = *(_DWORD *)(*((_QWORD *)a2 + 4) + 4 * v6);
      LODWORD(v11) = *(_DWORD *)(*((_QWORD *)a2 + 3) + 4 * v6);
      goto LABEL_8;
    }
LABEL_16:
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *(_DWORD *)a2 )
      return;
  }
  v11 = 0LL;
  if ( !v7 )
    goto LABEL_16;
  while ( 1 )
  {
    v10 = 0;
    if ( v8 )
      break;
LABEL_15:
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= v7 )
      goto LABEL_16;
  }
  while ( 1 )
  {
    v13 = *((_QWORD *)v4 + 20 * v11 + 2 * v10 + 7);
    if ( v13 )
    {
      if ( *(_QWORD *)(*((_QWORD *)a2 + 1) + 8 * v6) == v13 )
        break;
    }
    if ( ++v10 >= v8 )
      goto LABEL_15;
  }
LABEL_8:
  v12 = this[3];
  v14 = *this;
  if ( *((_BYTE *)a2 + 56) )
    CreatePlaneLiveDumpAtPassive(v11, v10, a2, v12, v14);
  else
    QueuePlaneViolationWorkItem(v11, v10, a2, v12, v14);
}
