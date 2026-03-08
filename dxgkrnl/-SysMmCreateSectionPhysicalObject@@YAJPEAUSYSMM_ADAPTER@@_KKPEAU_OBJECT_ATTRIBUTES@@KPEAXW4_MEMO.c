/*
 * XREFs of ?SysMmCreateSectionPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KKPEAU_OBJECT_ATTRIBUTES@@KPEAXW4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03D2134
 * Callers:
 *     DxgkCreatePhysicalMemoryObjectCB @ 0x1C0052100 (DxgkCreatePhysicalMemoryObjectCB.c)
 *     SysMmTestCreateSectionPhysicalObject @ 0x1C0071890 (SysMmTestCreateSectionPhysicalObject.c)
 * Callees:
 *     SmmCreatePhysicalObject @ 0x1C00130BC (SmmCreatePhysicalObject.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall SysMmCreateSectionPhysicalObject(
        struct SYSMM_ADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  __int64 result; // rax
  int v14; // ebp
  __int64 v15; // rdi
  __int64 v16; // rbx
  int v17; // eax
  _QWORD *v18; // r15
  int PhysicalObject; // r14d
  _QWORD *v20; // r12
  __int64 v21; // [rsp+50h] [rbp-38h] BYREF
  PVOID v22; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object; // [rsp+98h] [rbp+10h] BYREF

  if ( (a2 & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(3LL, a2);
    return 3221225485LL;
  }
  Object = 0LL;
  v14 = a7;
  v15 = 0x8000000LL;
  if ( a7 )
  {
    v16 = a5;
    if ( a7 == 2 )
    {
      LODWORD(v16) = a5 | 0x400;
      v15 = 1207959552LL;
    }
  }
  else
  {
    v16 = a5;
    LODWORD(v16) = a5 | 0x200;
    v15 = 402653184LL;
  }
  v21 = a2;
  v17 = MmCreateSection(&Object, a3, a4, &v21, v16, v15, a6, 0LL);
  v18 = (_QWORD *)a11;
  PhysicalObject = v17;
  v20 = (_QWORD *)a10;
  if ( v17 >= 0 )
  {
    v22 = Object;
    PhysicalObject = SmmCreatePhysicalObject(a1, 1, a2, (int)&v22, v14, 0, a8, a9, (ULONG_PTR **)a10, (ULONG_PTR **)a11);
    if ( PhysicalObject >= 0 )
      return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_1C013BD1C);
    WdLogSingleEntry3(6LL, a2, v15, v16);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to create section object from MmCreateSection, Size=%I64u, Attributes=%u, PageProtection=%u",
      a2,
      v15,
      v16,
      0LL,
      0LL);
  }
  if ( Object )
    ObfDereferenceObject(Object);
  *v20 = 0LL;
  result = (unsigned int)PhysicalObject;
  *v18 = 0LL;
  return result;
}
