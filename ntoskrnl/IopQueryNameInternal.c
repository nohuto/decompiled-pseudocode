/*
 * XREFs of IopQueryNameInternal @ 0x140720054
 * Callers:
 *     IopQueryName @ 0x14071E9C0 (IopQueryName.c)
 *     IoQueryFileDosDeviceName @ 0x14071FFB0 (IoQueryFileDosDeviceName.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     IopExceptionFilterMode @ 0x14055312C (IopExceptionFilterMode.c)
 *     IopQueryXxxInformation @ 0x14071E6CC (IopQueryXxxInformation.c)
 *     ObQueryNameStringMode @ 0x14071EE84 (ObQueryNameStringMode.c)
 *     IopGetFileInformation @ 0x14072054C (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x140720680 (IoVolumeDeviceToDosName.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQueryNameInternal(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        char a3,
        UNICODE_STRING *a4,
        unsigned int a5,
        _DWORD *a6,
        char a7)
{
  struct _FILE_OBJECT *v7; // rbx
  UNICODE_STRING *v8; // r12
  char v9; // r13
  unsigned int v10; // esi
  UNICODE_STRING *v11; // r14
  _DWORD *p_Type; // rcx
  int v13; // eax
  int v14; // ebx
  UNICODE_STRING *v15; // rdx
  UNICODE_STRING *v16; // r15
  char v17; // r8
  unsigned int Length; // ecx
  struct _FILE_OBJECT *v19; // r10
  char v20; // cl
  _DWORD *v21; // r13
  struct _IRP *v22; // r14
  int FileInformation; // eax
  int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // r8d
  __int64 v27; // rsi
  char *v28; // r15
  UNICODE_STRING *Pool2; // rax
  unsigned int v31; // eax
  int v32; // ecx
  const wchar_t *v33; // rdx
  int v34; // r8d
  __int16 v35; // cx
  __int64 v36; // [rsp+40h] [rbp-68h] BYREF
  char *v37; // [rsp+48h] [rbp-60h]
  PVOID P; // [rsp+50h] [rbp-58h]
  _OWORD v39[5]; // [rsp+58h] [rbp-50h] BYREF
  bool v41; // [rsp+B8h] [rbp+10h]
  char v42; // [rsp+B8h] [rbp+10h]
  char v43; // [rsp+C0h] [rbp+18h]

  v43 = a3;
  v7 = a1;
  LODWORD(v36) = 0;
  v8 = 0LL;
  P = 0LL;
  v41 = 0;
  v9 = 0;
  v39[0] = 0LL;
  v10 = 16;
  if ( a5 >= 0x10 )
    v10 = a5;
  if ( a7 == 1 )
  {
    Pool2 = (UNICODE_STRING *)ExAllocatePool2(256LL, v10, 844001097LL);
    v8 = Pool2;
    P = Pool2;
    if ( !Pool2 )
    {
      v14 = -1073741670;
      goto LABEL_44;
    }
    v11 = Pool2;
    a3 = v43;
  }
  else
  {
    v11 = (UNICODE_STRING *)v39;
    if ( a5 >= 0x10 )
      v11 = a4;
  }
  p_Type = &v7->DeviceObject->Type;
  if ( !a3 )
    goto LABEL_47;
  v13 = p_Type[13];
  if ( (v13 & 0x10) == 0 )
  {
    v14 = IoVolumeDeviceToDosName(p_Type, v11);
    LODWORD(v36) = v11->Length + 18;
LABEL_9:
    if ( v14 >= 0 )
    {
      v9 = 1;
      goto LABEL_11;
    }
    v7 = a1;
    goto LABEL_74;
  }
  v33 = L"\\\\?\\vmsmb";
  v34 = v13 & 0x80000;
  if ( (v13 & 0x80000) == 0 )
    v33 = L"\\";
  LODWORD(v36) = v34 != 0 ? 36 : 20;
  if ( (unsigned int)v36 <= v10 )
  {
    v14 = 0;
    v35 = v34 != 0 ? 18 : 2;
    v11->Length = v35;
    v11->MaximumLength = v35;
    v11->Buffer = &v11[1].Length;
    memmove(&v11[1], v33, (-(__int64)(v34 != 0) & 0x10) + 4);
    goto LABEL_9;
  }
LABEL_74:
  p_Type = &v7->DeviceObject->Type;
LABEL_47:
  v14 = ObQueryNameStringMode((char *)p_Type, (__int64)v11, v10, &v36, 0);
LABEL_11:
  if ( v14 < 0 )
  {
    if ( v14 != -1073741820 )
      goto LABEL_44;
  }
  else if ( !v9 )
  {
    v41 = v11->Length == 0;
  }
  v15 = a4;
  v16 = a4 + 1;
  v17 = v43;
  if ( v43 && v9 )
  {
    if ( v10 < (unsigned int)v36 )
      Length = v10 - 16;
    else
      Length = v11->Length;
    memmove(&a4[1], v11->Buffer, Length);
    v19 = a1;
    if ( (a1->DeviceObject->Characteristics & 0x10) == 0 )
    {
      ExFreePoolWithTag(v11->Buffer, 0);
      v15 = a4;
      v17 = v43;
LABEL_20:
      v19 = a1;
      goto LABEL_21;
    }
    v15 = a4;
    v17 = v43;
  }
  else
  {
    if ( a7 != 1 || a5 < 0x10 || (unsigned int)v36 > v10 )
      goto LABEL_20;
    a4->Length = v11->Length;
    a4->MaximumLength = v11->MaximumLength;
    memmove(v16, &v11[1], (unsigned int)v36 - 16LL);
    v15 = a4;
    v19 = a1;
    v17 = v43;
  }
LABEL_21:
  if ( v41 )
    LODWORD(v36) = v36 + 2;
  v20 = 0;
  v42 = 0;
  if ( a5 < 0x10 || (unsigned int)v36 > v10 )
  {
    v21 = a6;
    *a6 = v36;
    v20 = 1;
    v42 = 1;
  }
  else
  {
    v15->Buffer = &v16->Length;
    v16 = (UNICODE_STRING *)((char *)v16 + v11->Length);
    v21 = a6;
  }
  if ( a7 == 1 )
  {
    v22 = (struct _IRP *)v8;
    if ( !v20 )
      v10 = v10 - v36 + 4;
  }
  else if ( v20 )
  {
    v22 = (struct _IRP *)v39;
    if ( a5 >= 0x10 )
      v22 = (struct _IRP *)v15;
  }
  else
  {
    v22 = (struct _IRP *)((char *)&v16[-1].Buffer + 4);
    LODWORD(v37) = HIDWORD(v16[-1].Buffer);
    v10 = (_DWORD)v15 + v10 - ((_DWORD)v16 - 4) - 2;
  }
  if ( (a7 != 1 || v17) && (v19->Flags & 2) != 0 )
    FileInformation = IopGetFileInformation(v19, (__int64)&v36);
  else
    FileInformation = IopQueryXxxInformation(v19, 9, v10, a7, v22, &v36, 1);
  v14 = FileInformation;
  if ( (FileInformation & 0xC0000000) == 0xC0000000 )
  {
    v31 = FileInformation + 1073741822;
    if ( (unsigned int)(v14 + 1073741822) > 0xE )
      goto LABEL_44;
    v32 = 18435;
    if ( !_bittest(&v32, v31) )
      goto LABEL_44;
    LODWORD(v36) = 4;
    *(_DWORD *)&v22->Type = 0;
    *(&v22->Size + 1) = 92;
    v14 = 0;
    v24 = v36;
  }
  else
  {
    v24 = v36;
    if ( (unsigned int)v36 < 4 )
      v24 = 4;
    LODWORD(v36) = v24;
  }
  if ( v42 )
  {
    *v21 += *(_DWORD *)&v22->Type;
    v14 = a5 < 0x10 ? -1073741820 : -2147483643;
  }
  else
  {
    v25 = v24 - 4;
    v26 = *(_DWORD *)&v22->Type;
    if ( v25 <= *(_DWORD *)&v22->Type )
      v26 = v25;
    LODWORD(v36) = (_DWORD)v16 + *(_DWORD *)&v22->Type - (_DWORD)a4;
    if ( *(&v22->Size + 1) == 92 )
    {
      v27 = v26;
      if ( a7 == 1 )
        memmove(v16, &v22->Size + 1, v26);
      else
        *(_DWORD *)&v22->Type = (_DWORD)v37;
      v28 = (char *)v16 + v27;
      v37 = v28;
      *(_WORD *)v28 = 0;
      LODWORD(v36) = v36 + 2;
      *v21 = v36;
      LOWORD(v28) = (_WORD)v28 - (_WORD)a4;
      a4->Length = (_WORD)v28 - 16;
      a4->MaximumLength = (_WORD)v28 - 14;
    }
    else
    {
      v14 = -1073741767;
    }
  }
LABEL_44:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v14;
}
