__int64 __fastcall PiDevCfgQueryObjectProperties(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        __int64 a5,
        unsigned int a6)
{
  int v6; // ebx
  void *Pool2; // rdi
  int v8; // r15d
  int *v9; // rsi
  int v10; // eax
  __int64 v11; // r14
  UNICODE_STRING *v12; // r12
  int MaximumLength; // ecx
  HANDLE v14; // r9
  int ObjectProperty; // eax
  int v16; // r9d
  unsigned int v17; // ecx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // r8d
  wchar_t *StringRoutine; // rax
  wchar_t *Buffer; // rdx
  __int64 v24; // rax
  void *v25; // rax
  size_t Size; // [rsp+68h] [rbp-29h] BYREF
  int v27; // [rsp+70h] [rbp-21h]
  HANDLE Handle; // [rsp+80h] [rbp-11h] BYREF
  __int64 v29; // [rsp+88h] [rbp-9h]
  unsigned int v30; // [rsp+E8h] [rbp+57h]

  v29 = *(_QWORD *)&PiPnpRtlCtx;
  v6 = 0;
  Handle = 0LL;
  Pool2 = 0LL;
  v8 = 0;
  Size = 0x100000000LL;
  if ( !a4 )
  {
    v6 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a2, a3, 33554433, 0, (__int64)&Handle);
    if ( v6 < 0 )
      goto LABEL_23;
  }
  v27 = 0;
  if ( !a6 )
    goto LABEL_23;
  v9 = (int *)(a5 + 8);
  while ( 2 )
  {
    v10 = v9[5];
    v11 = *((_QWORD *)v9 + 1);
    if ( (v10 & 4) != 0 )
    {
      v12 = (UNICODE_STRING *)*((_QWORD *)v9 + 1);
      v11 = *(_QWORD *)(v11 + 8);
      MaximumLength = v12->MaximumLength;
    }
    else
    {
      MaximumLength = v9[4];
      v12 = 0LL;
    }
    v30 = MaximumLength;
    if ( (v10 & 2) != 0 )
    {
      if ( Pool2 || (v8 = 260, (Pool2 = (void *)ExAllocatePool2(256LL, 260LL, 1667526736LL)) != 0LL) )
      {
        v11 = (__int64)Pool2;
        goto LABEL_9;
      }
LABEL_78:
      v6 = -1073741670;
      goto LABEL_23;
    }
    while ( 1 )
    {
      v14 = Handle;
      if ( a4 )
        v14 = a4;
      ObjectProperty = PnpGetObjectProperty(
                         v29,
                         a2,
                         a3,
                         (__int64)v14,
                         0LL,
                         *((_QWORD *)v9 - 1),
                         (__int64)&Size + 4,
                         v11,
                         MaximumLength,
                         (__int64)&Size,
                         0);
      v6 = ObjectProperty;
      if ( ObjectProperty != -1073741789 )
      {
        if ( ObjectProperty == -1073741670 )
          goto LABEL_21;
        v16 = v8;
        if ( ObjectProperty < 0 )
          goto LABEL_15;
        v19 = HIDWORD(Size);
        v20 = (unsigned int)Size;
        if ( !HIDWORD(Size) )
        {
          *v9 = 0;
          goto LABEL_37;
        }
        v21 = *v9;
        if ( HIDWORD(Size) == *v9 )
        {
          if ( v21 != 18 || HIDWORD(Size) != 25 )
            goto LABEL_30;
        }
        else if ( v21 != 18 || HIDWORD(Size) != 25 )
        {
          goto LABEL_70;
        }
        *v9 = 25;
LABEL_30:
        if ( v19 != 18 && v19 != 20 && v19 != 25 )
        {
          if ( v19 == 8210 )
          {
            if ( !PnpValidateMultiSzData((_WORD *)v11, v20) )
              v6 = -1073741823;
            if ( v6 < 0 )
              goto LABEL_15;
          }
LABEL_37:
          v8 = v16;
          if ( v12 && (unsigned int)v20 > 0xFFFE )
          {
            v6 = -2147483643;
LABEL_15:
            v17 = v30;
            goto LABEL_16;
          }
          if ( (v9[5] & 2) == 0 )
          {
            if ( !v12 )
            {
LABEL_40:
              if ( (v9[5] & 2) != 0 )
              {
                **((_QWORD **)v9 + 1) = v11;
                LODWORD(v20) = Size;
              }
              v9[4] = v20;
LABEL_43:
              v17 = v30;
              goto LABEL_16;
            }
LABEL_47:
            v12->Length = v20;
            if ( HIDWORD(Size) != 8210 )
            {
              Buffer = v12->Buffer;
              if ( Buffer )
              {
                if ( (unsigned __int16)Size >= 2u && !Buffer[((unsigned __int64)(unsigned __int16)Size >> 1) - 1] )
                  v12->Length = Size - 2;
              }
            }
            goto LABEL_43;
          }
          if ( v12 )
          {
            StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v20);
            v12->Buffer = StringRoutine;
            if ( StringRoutine )
            {
              v12->MaximumLength = Size;
              memmove(StringRoutine, Pool2, (unsigned int)Size);
              LOWORD(v20) = Size;
              goto LABEL_47;
            }
          }
          else
          {
            v25 = (void *)ExAllocatePool2(256LL, v20, 1667526736LL);
            v11 = (__int64)v25;
            if ( v25 )
            {
              memmove(v25, Pool2, (unsigned int)Size);
              LODWORD(v20) = Size;
              goto LABEL_40;
            }
          }
          v6 = -1073741670;
          goto LABEL_21;
        }
        if ( PnpValidateStringData(v11, v20) )
          goto LABEL_37;
LABEL_70:
        v6 = -1073741823;
        goto LABEL_15;
      }
      v17 = v30;
      if ( (v9[5] & 2) == 0 )
        goto LABEL_16;
      if ( (unsigned int)Size <= v30 )
        break;
      ExFreePoolWithTag(Pool2, 0);
      v8 = Size;
      v24 = ExAllocatePool2(256LL, (unsigned int)Size, 1667526736LL);
      Pool2 = (void *)v24;
      if ( !v24 )
        goto LABEL_78;
      v11 = v24;
LABEL_9:
      MaximumLength = v8;
      v30 = v8;
    }
    v6 = -1073741595;
LABEL_16:
    v9[6] = v6;
    if ( v6 >= 0 )
    {
LABEL_20:
      v9 += 10;
      if ( ++v27 < a6 )
        continue;
    }
    else
    {
      if ( (v9[5] & 8) != 0 )
      {
        if ( v12 )
        {
          RtlInitUnicodeString(v12, 0LL);
        }
        else if ( v11 )
        {
          memset((void *)v11, 0, v17);
        }
      }
      if ( (v9[5] & 1) == 0 )
      {
        v6 = 0;
        goto LABEL_20;
      }
    }
    break;
  }
LABEL_21:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
