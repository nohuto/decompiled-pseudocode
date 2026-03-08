/*
 * XREFs of MiMapImageForEnclaveUse @ 0x140A3BAD0
 * Callers:
 *     MiInitializeVsmEnclave @ 0x140A3B328 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3B820 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MmMapViewOfSectionEx @ 0x1402A5B98 (MmMapViewOfSectionEx.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x140344094 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1403441A0 (MiDereferenceControlAreaFile.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiValidateSectionCreate @ 0x14069F890 (MiValidateSectionCreate.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall MiMapImageForEnclaveUse(void *a1, __int64 a2, KPROCESSOR_MODE a3, int a4, ULONG_PTR *a5)
{
  NTSTATUS result; // eax
  _DWORD *v8; // r14
  unsigned __int64 v9; // rax
  ULONG_PTR v10; // rsi
  int v11; // edi
  __int64 v12; // rbx
  __int64 v13; // [rsp+58h] [rbp-49h]
  PVOID Object; // [rsp+70h] [rbp-31h] BYREF
  __int64 v15; // [rsp+78h] [rbp-29h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v16; // [rsp+80h] [rbp-21h] BYREF

  Object = 0LL;
  memset(&v16, 0, sizeof(v16));
  result = ObReferenceObjectByHandle(a1, 4u, MmSectionObjectType, a3, &Object, 0LL);
  if ( result >= 0 )
  {
    v8 = Object;
    v9 = MiSectionControlArea((__int64)Object);
    v10 = v9;
    if ( (v8[14] & 0x20) != 0 )
    {
      if ( (*(_DWORD *)(v9 + 92) & 0xC0000) != 0 )
        goto LABEL_9;
      if ( (*(_QWORD *)(*(_QWORD *)(v9 + 96) + 40LL) & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
      {
        v12 = MiReferenceControlAreaFile(v9);
        v11 = MiValidateSectionCreate(v12, v10, 0xFFFFFFFF, a2, 0x40000000, 4, 0);
        MiDereferenceControlAreaFile(v10, v12);
        if ( v11 < 0 )
          goto LABEL_10;
        if ( (*(_DWORD *)(v10 + 92) & 0xC0000) != 0 )
        {
LABEL_9:
          KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)&v16);
          v15 = 0LL;
          Object = 0LL;
          v11 = MmMapViewOfSectionEx(
                  (int)v8,
                  PsSecureSystemProcess,
                  a4,
                  (__int64)&v15,
                  (__int64)&Object,
                  0,
                  2,
                  0LL,
                  0,
                  0,
                  0LL,
                  v13,
                  0x2000000);
          KiUnstackDetachProcess(&v16);
          *a5 = v10;
          goto LABEL_10;
        }
      }
      v11 = -1073740760;
    }
    else
    {
      v11 = -1073741751;
    }
LABEL_10:
    ObfDereferenceObject(v8);
    return v11;
  }
  return result;
}
