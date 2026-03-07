__int64 __fastcall PiDevCfgConvertPropertyFromValue(int a1, int a2, wchar_t *a3, unsigned int a4, int *a5, GUID **a6)
{
  unsigned int v6; // edi
  int v8; // esi
  GUID *Pool2; // rbx
  unsigned int v10; // r9d
  unsigned int v11; // r9d
  unsigned int v12; // r9d
  unsigned int v13; // r9d
  unsigned int v14; // r9d
  unsigned int v15; // r9d
  unsigned int v16; // r9d
  unsigned int v17; // r9d
  int v18; // ecx
  int v19; // ecx
  bool v20; // zf
  bool v21; // zf
  __int64 v22; // rbp
  GUID *v23; // rax
  int v24; // ebp
  GUID *v25; // rax
  int v26; // ebp
  GUID *v27; // rax
  unsigned int v28; // r9d
  unsigned int v29; // r9d
  unsigned int v30; // r9d
  unsigned int v31; // r9d
  unsigned int v32; // r9d
  unsigned int v33; // r9d
  unsigned int v34; // r9d
  int v35; // ecx
  int v36; // ebp
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  v8 = 0;
  Pool2 = 0LL;
  if ( a4 > 0x1003 )
  {
    if ( a4 != 8210 )
      goto LABEL_60;
    v21 = a1 == 7;
    goto LABEL_58;
  }
  if ( a4 == 4099 )
    goto LABEL_59;
  if ( a4 > 0x10 )
  {
    v28 = a4 - 17;
    if ( !v28 )
    {
      if ( a1 != 4 )
        goto LABEL_60;
      v36 = *(_DWORD *)a3;
      v8 = 1;
      Pool2 = (GUID *)ExAllocatePool2(256LL, 1LL, 1667526736LL);
      if ( Pool2 )
      {
        LOBYTE(Pool2->Data1) = -(v36 != 0);
        goto LABEL_60;
      }
      return (unsigned int)-1073741670;
    }
    v29 = v28 - 1;
    if ( v29 )
    {
      v30 = v29 - 1;
      if ( !v30 )
      {
        v20 = a1 == 3;
LABEL_18:
        v8 = a2;
        Pool2 = (GUID *)a3;
        if ( !v20 )
        {
          v8 = 0;
          Pool2 = 0LL;
        }
        goto LABEL_60;
      }
      v31 = v30 - 1;
      if ( v31 )
      {
        v32 = v31 - 2;
        if ( !v32 || (v33 = v32 - 1) == 0 || (v34 = v33 - 1) == 0 )
        {
LABEL_51:
          v20 = a1 == 4;
          goto LABEL_18;
        }
        if ( v34 != 1 )
          goto LABEL_60;
      }
    }
    v35 = a1 - 1;
    if ( !v35 )
      goto LABEL_59;
    v21 = v35 == 1;
    goto LABEL_58;
  }
  if ( a4 == 16 )
  {
    if ( a1 != 3 && a1 != 11 )
      goto LABEL_60;
    v21 = a2 == 8;
LABEL_58:
    if ( !v21 )
      goto LABEL_60;
LABEL_59:
    v8 = a2;
    Pool2 = (GUID *)a3;
    goto LABEL_60;
  }
  v10 = a4 - 2;
  if ( !v10 || (v11 = v10 - 1) == 0 )
  {
    if ( a1 != 4 )
      goto LABEL_60;
    v26 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0xFFu )
      goto LABEL_60;
    v8 = 1;
    v27 = (GUID *)ExAllocatePool2(256LL, 1LL, 1667526736LL);
    Pool2 = v27;
    if ( v27 )
    {
      LOBYTE(v27->Data1) = v26;
      goto LABEL_60;
    }
    return (unsigned int)-1073741670;
  }
  v12 = v11 - 1;
  if ( !v12 || (v13 = v12 - 1) == 0 )
  {
    if ( a1 != 4 )
      goto LABEL_60;
    v24 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0xFFFFu )
      goto LABEL_60;
    v8 = 2;
    v25 = (GUID *)ExAllocatePool2(256LL, 2LL, 1667526736LL);
    Pool2 = v25;
    if ( v25 )
    {
      LOWORD(v25->Data1) = v24;
      goto LABEL_60;
    }
    return (unsigned int)-1073741670;
  }
  v14 = v13 - 1;
  if ( !v14 )
    goto LABEL_51;
  v15 = v14 - 1;
  if ( !v15 )
    goto LABEL_51;
  v16 = v15 - 1;
  if ( !v16 || (v17 = v16 - 1) == 0 )
  {
    if ( a1 == 4 )
    {
      v22 = *(unsigned int *)a3;
      v8 = 8;
      v23 = (GUID *)ExAllocatePool2(256LL, 8LL, 1667526736LL);
      Pool2 = v23;
      if ( v23 )
      {
        *(_QWORD *)&v23->Data1 = v22;
        goto LABEL_60;
      }
      return (unsigned int)-1073741670;
    }
    v21 = a1 == 11;
    goto LABEL_58;
  }
  if ( v17 != 4 )
    goto LABEL_60;
  v18 = a1 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      if ( v19 == 1 )
      {
        v20 = a2 == 16;
        goto LABEL_18;
      }
LABEL_60:
      *a5 = v8;
      *a6 = Pool2;
      return v6;
    }
  }
  if ( a2 != 78 )
    goto LABEL_60;
  v8 = 16;
  Pool2 = (GUID *)ExAllocatePool2(256LL, 16LL, 1667526736LL);
  if ( Pool2 )
  {
    GuidString.Buffer = a3;
    GuidString.MaximumLength = 78;
    GuidString.Length = 76;
    if ( RtlGUIDFromString(&GuidString, Pool2) < 0 )
    {
      ExFreePoolWithTag(Pool2, 0);
      Pool2 = 0LL;
    }
    goto LABEL_60;
  }
  return (unsigned int)-1073741670;
}
