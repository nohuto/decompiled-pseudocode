__int64 __fastcall PiControlGetDeviceStack(__int64 a1, unsigned int a2, _WORD *a3, unsigned int *a4)
{
  __int64 v4; // rcx
  unsigned int v5; // r12d
  _WORD *v6; // r13
  int v7; // ebx
  UNICODE_STRING *v8; // rsi
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  void *AttachedDeviceReferenceWithTag; // rax
  int v11; // r14d
  void *v12; // rdi
  PVOID *v13; // rax
  unsigned int v14; // edx
  _WORD *v15; // r15
  __int64 v16; // r12
  unsigned __int16 Length; // di
  _WORD *v18; // r15
  unsigned int v19; // r14d
  PVOID *v20; // rdi
  __int64 v21; // rax
  PVOID **Pool2; // rax
  PVOID *v23; // rcx
  unsigned int v25; // r8d
  unsigned int v26; // [rsp+30h] [rbp-48h]
  PVOID *v27; // [rsp+38h] [rbp-40h]
  PVOID Object; // [rsp+40h] [rbp-38h]
  PVOID P; // [rsp+48h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+50h] [rbp-28h]
  UNICODE_STRING Src; // [rsp+58h] [rbp-20h] BYREF
  int v32; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v33; // [rsp+C8h] [rbp+50h]
  _WORD *v34; // [rsp+D0h] [rbp+58h]
  unsigned int *v35; // [rsp+D8h] [rbp+60h]

  v35 = a4;
  v34 = a3;
  v33 = a2;
  v4 = *(_QWORD *)(a1 + 32);
  p_P = &P;
  v32 = 0;
  v5 = a2;
  P = &P;
  v6 = a3;
  v7 = 0;
  Src = 0LL;
  v8 = 0LL;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v4, 0x43706E50u);
  Object = DeviceAttachmentBaseRefWithTag;
  if ( !DeviceAttachmentBaseRefWithTag )
  {
    v7 = -1073741808;
    goto LABEL_24;
  }
  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(DeviceAttachmentBaseRefWithTag, 0x43706E50u);
  v11 = 0;
  while ( 1 )
  {
    v12 = AttachedDeviceReferenceWithTag;
    if ( !AttachedDeviceReferenceWithTag )
      break;
    Pool2 = (PVOID **)ExAllocatePool2(256LL, 24LL, 1198550608LL);
    if ( !Pool2 )
    {
      ObfDereferenceObjectWithTag(v12, 0x43706E50u);
      v7 = -1073741670;
      goto LABEL_24;
    }
    Pool2[2] = (PVOID *)v12;
    v23 = p_P;
    if ( *p_P != &P )
LABEL_52:
      __fastfail(3u);
    Pool2[1] = p_P;
    *Pool2 = &P;
    *v23 = Pool2;
    p_P = (PVOID *)Pool2;
    AttachedDeviceReferenceWithTag = IoGetLowerDeviceObjectWithTag((__int64)v12, 0x43706E50u);
  }
  v13 = (PVOID *)P;
  v27 = (PVOID *)P;
  v14 = v5;
  v15 = v6;
  v26 = v5;
  if ( P == &P )
  {
LABEL_17:
    if ( v15 && v14 >= 2 )
      *v15 = 0;
    v19 = v11 + 2;
    *v35 = v19;
    if ( !v6 || v19 > v5 )
      v7 = -1073741789;
    goto LABEL_22;
  }
  do
  {
    v16 = *((_QWORD *)v13[2] + 1);
    if ( !v16 )
    {
      RtlInitUnicodeString(&Src, L"?");
LABEL_48:
      Length = Src.Length;
      goto LABEL_11;
    }
    if ( *(_QWORD *)(v16 + 64) && *(_WORD *)(v16 + 56) >= 2u )
    {
      Length = _mm_cvtsi128_si32(*(__m128i *)(v16 + 56));
      Src = *(UNICODE_STRING *)(v16 + 56);
      for ( Src.Length = Length; Length >= 2u; Src.Length = Length )
      {
        if ( Src.Buffer[((unsigned __int64)Length >> 1) - 1] )
          break;
        Length -= 2;
      }
    }
    else
    {
      RtlInitUnicodeString(&Src, 0LL);
      Length = Src.Length;
    }
    if ( !Length )
    {
      v25 = 272;
      v32 = 272;
      if ( !v8 )
      {
        v8 = (UNICODE_STRING *)ExAllocatePool2(256LL, 272LL, 1198550608LL);
        if ( !v8 )
        {
          v7 = -1073741670;
          goto LABEL_24;
        }
        v25 = v32;
      }
      v7 = ObQueryNameStringMode((char *)v16, (__int64)v8, v25, &v32, 0);
      if ( v7 >= 0 && v32 && v8->Length >= 2u )
      {
        Src = *v8;
      }
      else
      {
        RtlInitUnicodeString(&Src, L"?");
        v7 = 0;
      }
      goto LABEL_48;
    }
LABEL_11:
    if ( v15 )
    {
      v14 = v26;
      if ( v26 >= (unsigned __int64)Length + 2 )
      {
        memmove(v15, Src.Buffer, Length);
        v18 = &v15[(unsigned __int64)Length >> 1];
        *v18 = 0;
        v15 = v18 + 1;
        v14 = -2 - Length + v26;
        v26 = v14;
      }
    }
    else
    {
      v14 = v26;
    }
    v11 += Length + 2;
    v13 = (PVOID *)*v27;
    v27 = v13;
  }
  while ( v13 != &P );
  if ( v7 >= 0 )
  {
    v5 = v33;
    v6 = v34;
    goto LABEL_17;
  }
LABEL_22:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_24:
  while ( 1 )
  {
    v20 = (PVOID *)P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_52;
    v21 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_52;
    P = *(PVOID *)P;
    *(_QWORD *)(v21 + 8) = &P;
    ObfDereferenceObjectWithTag(v20[2], 0x43706E50u);
    ExFreePoolWithTag(v20, 0);
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x43706E50u);
  return (unsigned int)v7;
}
