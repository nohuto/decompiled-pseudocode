/*
 * XREFs of PiControlGetDeviceStack @ 0x140730018
 * Callers:
 *     PiControlGetPropertyData @ 0x140690D50 (PiControlGetPropertyData.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14032634C (IoGetLowerDeviceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14034C53C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1403616F0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     ObQueryNameString @ 0x14070FAD0 (ObQueryNameString.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiControlGetDeviceStack(__int64 a1, unsigned int a2, _WORD *a3, unsigned int *a4)
{
  __int64 v4; // rcx
  unsigned int v5; // r15d
  NTSTATUS v7; // edi
  _OBJECT_NAME_INFORMATION *v8; // r14
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRefWithTag; // rax
  void *i; // rax
  void *v11; // rbx
  PVOID *PoolWithTag; // rax
  PVOID *v13; // rcx
  PVOID *v14; // r13
  unsigned int v15; // edx
  _WORD *v16; // r12
  int v17; // esi
  __int64 v18; // r15
  unsigned __int16 Length; // bx
  _WORD *v20; // r12
  unsigned int v21; // esi
  PVOID *v22; // rbx
  __int64 v23; // rax
  ULONG v25; // r8d
  unsigned int v26; // [rsp+20h] [rbp-38h]
  struct _DEVICE_OBJECT *Object; // [rsp+28h] [rbp-30h]
  PVOID P; // [rsp+30h] [rbp-28h] BYREF
  PVOID *p_P; // [rsp+38h] [rbp-20h]
  _OBJECT_NAME_INFORMATION Src; // [rsp+40h] [rbp-18h] BYREF
  ULONG ReturnLength; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v32; // [rsp+A8h] [rbp+50h]
  _WORD *v33; // [rsp+B0h] [rbp+58h]
  unsigned int *v34; // [rsp+B8h] [rbp+60h]

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v4 = *(_QWORD *)(a1 + 32);
  p_P = &P;
  ReturnLength = 0;
  v5 = a2;
  P = &P;
  v7 = 0;
  v8 = 0LL;
  Src = 0LL;
  DeviceAttachmentBaseRefWithTag = (struct _DEVICE_OBJECT *)IoGetDeviceAttachmentBaseRefWithTag(v4, 0x43706E50u);
  Object = DeviceAttachmentBaseRefWithTag;
  if ( !DeviceAttachmentBaseRefWithTag )
  {
    v7 = -1073741808;
    goto LABEL_27;
  }
  for ( i = IoGetAttachedDeviceReferenceWithTag(DeviceAttachmentBaseRefWithTag, 0x43706E50u);
        ;
        i = IoGetLowerDeviceObjectWithTag((__int64)v11, 0x43706E50u) )
  {
    v11 = i;
    if ( !i )
      break;
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x47706E50u);
    if ( !PoolWithTag )
    {
      ObfDereferenceObjectWithTag(v11, 0x43706E50u);
      v7 = -1073741670;
      goto LABEL_27;
    }
    PoolWithTag[2] = v11;
    v13 = p_P;
    if ( *p_P != &P )
LABEL_35:
      __fastfail(3u);
    PoolWithTag[1] = p_P;
    *PoolWithTag = &P;
    *v13 = PoolWithTag;
    p_P = PoolWithTag;
  }
  v14 = (PVOID *)P;
  v15 = v5;
  v26 = v5;
  v16 = a3;
  v17 = 0;
  if ( P == &P )
  {
LABEL_20:
    if ( v16 && v15 >= 2 )
      *v16 = 0;
    v21 = v17 + 2;
    *v34 = v21;
    if ( !v33 || v21 > v5 )
      v7 = -1073741789;
    goto LABEL_25;
  }
  while ( 1 )
  {
    v18 = *((_QWORD *)v14[2] + 1);
    if ( v18 )
      break;
    RtlInitUnicodeString(&Src.Name, L"?");
LABEL_50:
    Length = Src.Name.Length;
LABEL_14:
    if ( v16 && v26 >= (unsigned __int64)Length + 2 )
    {
      memmove(v16, Src.Name.Buffer, Length);
      v20 = &v16[(unsigned __int64)Length >> 1];
      *v20 = 0;
      v16 = v20 + 1;
      v26 += -2 - Length;
    }
    v14 = (PVOID *)*v14;
    v17 += Length + 2;
    if ( v14 == &P )
      goto LABEL_18;
  }
  if ( *(_QWORD *)(v18 + 64) && *(_WORD *)(v18 + 56) >= 2u )
  {
    Length = _mm_cvtsi128_si32(*(__m128i *)(v18 + 56));
    Src = *(_OBJECT_NAME_INFORMATION *)(v18 + 56);
    for ( Src.Name.Length = Length; Length >= 2u; Src.Name.Length = Length )
    {
      if ( Src.Name.Buffer[((unsigned __int64)Length >> 1) - 1] )
        break;
      Length -= 2;
    }
  }
  else
  {
    RtlInitUnicodeString(&Src.Name, 0LL);
    Length = Src.Name.Length;
  }
  if ( Length )
    goto LABEL_14;
  v25 = 272;
  ReturnLength = 272;
  if ( v8 )
  {
LABEL_44:
    v7 = ObQueryNameString((PVOID)v18, v8, v25, &ReturnLength);
    if ( v7 >= 0 && ReturnLength && v8->Name.Length >= 2u )
    {
      Src = *v8;
    }
    else
    {
      RtlInitUnicodeString(&Src.Name, L"?");
      v7 = 0;
    }
    goto LABEL_50;
  }
  v8 = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x110uLL, 0x47706E50u);
  if ( v8 )
  {
    v25 = ReturnLength;
    goto LABEL_44;
  }
  v7 = -1073741670;
LABEL_18:
  if ( v7 >= 0 )
  {
    v15 = v26;
    v5 = v32;
    goto LABEL_20;
  }
LABEL_25:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_27:
  while ( 1 )
  {
    v22 = (PVOID *)P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_35;
    v23 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_35;
    P = *(PVOID *)P;
    *(_QWORD *)(v23 + 8) = &P;
    ObfDereferenceObjectWithTag(v22[2], 0x43706E50u);
    ExFreePoolWithTag(v22, 0);
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x43706E50u);
  return (unsigned int)v7;
}
