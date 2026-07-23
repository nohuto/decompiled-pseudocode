/*
 * XREFs of NtQueryLicenseValue @ 0x14071F530
 * Callers:
 *     ExpGetNtProductTypeFromLicenseValue @ 0x140793BA8 (ExpGetNtProductTypeFromLicenseValue.c)
 *     MiMemoryLicense @ 0x140A6778C (MiMemoryLicense.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     ntoskrnl_27 @ 0x14071F4A0 (ntoskrnl_27.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     SLQueryLicenseValueInternal @ 0x1407AB444 (SLQueryLicenseValueInternal.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  SIZE_T v5; // r12
  NTSTATUS v8; // ebx
  __int64 v9; // rdx
  PULONG v10; // r14
  int v11; // eax
  unsigned __int64 Buffer; // rcx
  unsigned __int64 v13; // rdx
  PVOID PoolWithTag; // rax
  PVOID v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  _DWORD Size[3]; // [rsp+44h] [rbp-64h] BYREF
  PVOID P; // [rsp+50h] [rbp-58h]
  _OWORD v24[5]; // [rsp+58h] [rbp-50h] BYREF
  ULONG v25; // [rsp+B0h] [rbp+8h] BYREF
  PULONG v26; // [rsp+B8h] [rbp+10h]
  PVOID v27; // [rsp+C0h] [rbp+18h]
  ULONG v28; // [rsp+C8h] [rbp+20h]

  v28 = DataSize;
  v27 = Data;
  v26 = Type;
  v5 = DataSize;
  v24[0] = 0LL;
  v8 = 0;
  P = 0LL;
  v25 = 0;
  memset(Size, 0, sizeof(Size));
  v9 = (unsigned __int8)KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  if ( ValueName && (v10 = ResultDataSize) != 0LL && (Data || !DataSize) )
  {
    if ( DataSize > 0x800000 )
    {
      v8 = -1073741801;
    }
    else if ( (_BYTE)v9 )
    {
      if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
        ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
      v11 = *(_DWORD *)&ValueName->Length;
      LODWORD(v24[0]) = *(_DWORD *)&ValueName->Length;
      Buffer = (unsigned __int64)ValueName->Buffer;
      *((_QWORD *)&v24[0] + 1) = Buffer;
      if ( Buffer && (_WORD)v11 && (v11 & 1) == 0 )
      {
        if ( (Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = Buffer + (unsigned __int16)v11;
        if ( v13 > 0x7FFFFFFF0000LL || v13 < Buffer )
          MEMORY[0x7FFFFFFF0000] = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, LOWORD(v24[0]), 0x20534C53u);
        P = PoolWithTag;
        if ( PoolWithTag )
        {
          v15 = PoolWithTag;
          memmove(PoolWithTag, *((const void **)&v24[0] + 1), LOWORD(v24[0]));
          *((_QWORD *)&v24[0] + 1) = v15;
          if ( Type )
          {
            v16 = (__int64)Type;
            if ( (unsigned __int64)Type >= 0x7FFFFFFF0000LL )
              v16 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v16 = *(_DWORD *)v16;
            v25 = *Type;
          }
          if ( Data
            && (_DWORD)v5
            && (ProbeForWrite(Data, v5, 1u),
                (*(_QWORD *)&Size[1] = ExAllocatePoolWithTag(PagedPool, v5, 0x20534C53u)) == 0LL) )
          {
            v8 = -1073741801;
          }
          else
          {
            Buffer = (unsigned __int64)v10;
            if ( (unsigned __int64)v10 >= 0x7FFFFFFF0000LL )
              Buffer = 0x7FFFFFFF0000LL;
            *(_DWORD *)Buffer = *(_DWORD *)Buffer;
            Size[0] = *v10;
          }
        }
        else
        {
          v8 = -1073741801;
        }
      }
      else
      {
        v8 = -1073741811;
      }
      if ( v8 >= 0 )
      {
        v17 = *((_QWORD *)PsGetCurrentServerSiloGlobals(Buffer, v9) + 113);
        if ( qword_140D2D4E0 )
          v18 = qword_140D2D4E0(v17, v24, &v25, *(_QWORD *)&Size[1], v5, Size);
        else
          v18 = SLQueryLicenseValueInternal(v17, v24, &v25, *(_QWORD *)&Size[1], v5, Size);
        v19 = v18;
        v8 = v18;
        if ( Type )
          *Type = v25;
        v20 = Size[0];
        *v10 = Size[0];
        if ( v19 >= 0 && Data )
        {
          if ( (unsigned int)v5 < v20 )
            v8 = -1073741789;
          else
            memmove(Data, *(const void **)&Size[1], v20);
        }
      }
    }
    else
    {
      v8 = ntoskrnl_27((__int64)ValueName, (__int64)Type, (__int64)Data, DataSize, (__int64)ResultDataSize);
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( *(_QWORD *)&Size[1] )
    ExFreePoolWithTag(*(PVOID *)&Size[1], 0);
  return v8;
}
