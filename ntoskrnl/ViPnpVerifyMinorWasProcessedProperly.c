char __fastcall ViPnpVerifyMinorWasProcessedProperly(__int64 a1, __int64 a2, int a3, int a4, const void *a5, int a6)
{
  _UNKNOWN **v6; // rax
  unsigned int v7; // r10d
  unsigned int v10; // r10d
  unsigned int v11; // r10d
  unsigned int v12; // r10d
  unsigned int v13; // r10d
  unsigned int v14; // r10d
  unsigned int v15; // r10d
  unsigned int v16; // ecx
  _DWORD *v17; // rdi
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  __int64 i; // rsi
  _QWORD *v22; // rbp
  _QWORD *BottomDeviceObjectWithTag; // r15
  unsigned int v24; // ecx
  unsigned int v25; // r10d
  unsigned int v26; // r10d
  unsigned int v27; // r10d
  unsigned int v28; // r10d
  unsigned int v29; // r10d
  unsigned int v30; // r10d
  unsigned int v31; // r10d
  int v32; // ecx
  int v33; // ecx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v6 = &retaddr;
  v7 = *(unsigned __int8 *)(a2 + 1);
  if ( v7 > 0xA )
  {
    v25 = v7 - 11;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v26 )
      {
        v27 = v26 - 3;
        if ( v27 )
        {
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              v30 = v29 - 1;
              if ( v30 )
              {
                v31 = v30 - 1;
                if ( v31 )
                {
                  if ( v31 != 2 )
                    return (char)v6;
                }
                else
                {
                  v32 = *(_DWORD *)(a2 + 8);
                  if ( v32 )
                  {
                    v33 = v32 - 1;
                    if ( v33 )
                    {
                      if ( (unsigned int)(v33 - 1) > 1 )
                        return (char)v6;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_54;
  }
  if ( v7 == 10 )
  {
LABEL_54:
    if ( !a3 || a4 != 2 )
      return (char)v6;
    v24 = 536;
LABEL_57:
    LOBYTE(v6) = ViErrorReport1(v24, a5, (const void *)a1);
    return (char)v6;
  }
  if ( !*(_BYTE *)(a2 + 1) )
    goto LABEL_39;
  v10 = v7 - 1;
  if ( !v10 )
    goto LABEL_39;
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a6 || a4 == 2 )
      return (char)v6;
    v24 = 774;
    goto LABEL_57;
  }
  v12 = v11 - 1;
  if ( !v12 || (v13 = v12 - 1) == 0 || (v14 = v13 - 1) == 0 || (v15 = v14 - 1) == 0 )
  {
LABEL_39:
    if ( a6 || a4 )
      return (char)v6;
    v24 = 535;
    goto LABEL_57;
  }
  if ( v15 != 1 )
    return (char)v6;
  if ( *(_DWORD *)(a2 + 8) != 4 )
    goto LABEL_21;
  if ( a3 )
  {
    if ( a4 != 2 )
      goto LABEL_21;
    v16 = 536;
  }
  else if ( a4 )
  {
    if ( *(int *)(a1 + 48) < 0 || *(_QWORD *)(a1 + 56) )
      goto LABEL_21;
    v16 = 555;
  }
  else
  {
    v16 = 554;
  }
  ViErrorReport1(v16, a5, (const void *)a1);
LABEL_21:
  LOBYTE(v6) = VfIoDisabled;
  if ( !VfIoDisabled && *(int *)(a1 + 48) >= 0 )
  {
    v17 = *(_DWORD **)(a1 + 56);
    if ( v17 )
    {
      v18 = *(_DWORD *)(a2 + 8);
      if ( !v18 || (v19 = v18 - 1) == 0 || (v20 = v19 - 1) == 0 || (unsigned int)(v20 - 1) <= 1 )
      {
        LOBYTE(v6) = MmIsNonPagedSystemAddressValid(*(PVOID *)(a1 + 56));
        if ( (_BYTE)v6 )
        {
          for ( i = 0LL; (unsigned int)i < *v17; i = (unsigned int)(i + 1) )
          {
            v22 = *(_QWORD **)&v17[2 * i + 2];
            LODWORD(v6) = IovUtilIsDeviceObjectMarked((__int64)v22, 5);
            if ( !(_DWORD)v6 )
            {
              BottomDeviceObjectWithTag = IovUtilGetBottomDeviceObjectWithTag(v22);
              if ( BottomDeviceObjectWithTag != v22 )
                ViErrorReport10(0x248u, a5, (const void *)a1, v22);
              IovUtilMarkDeviceObject((__int64)v22, 5LL);
              LOBYTE(v6) = ObfDereferenceObjectWithTag(BottomDeviceObjectWithTag, 0x49667256u);
            }
          }
        }
      }
    }
  }
  return (char)v6;
}
