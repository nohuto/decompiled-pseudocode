/*
 * XREFs of ViGenericVerifyIrpStackDownward @ 0x140AC00C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfA @ 0x140380B18 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405CBEB4 (VfUtilDbgPrint.c)
 *     ViErrorReport1 @ 0x1405CDA04 (ViErrorReport1.c)
 *     ViErrorReport6 @ 0x1405CDBC0 (ViErrorReport6.c)
 *     VfMajorIsNewRequest @ 0x140ACFFD8 (VfMajorIsNewRequest.c)
 *     VfMajorIsValidIrpStatus @ 0x140AD0058 (VfMajorIsValidIrpStatus.c)
 *     ViErrorDisplayDescription @ 0x140AD06D0 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140AD0724 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViGenericVerifyIrpStackDownward(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        int a6,
        const void *a7)
{
  const void *v7; // rbx
  __int64 v9; // rbp
  unsigned int v11; // r15d
  __int64 result; // rax
  __int64 v14; // r8
  __int64 v15; // rbp
  int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // [rsp+30h] [rbp-C8h]
  int v19; // [rsp+34h] [rbp-C4h]
  int v20; // [rsp+38h] [rbp-C0h]
  __int64 v21; // [rsp+40h] [rbp-B8h]
  __int64 v22; // [rsp+48h] [rbp-B0h]
  char pszDest[96]; // [rsp+50h] [rbp-A8h] BYREF

  v7 = *(const void **)a1;
  v9 = *(_QWORD *)(a1 + 240);
  v11 = *(_DWORD *)(*(_QWORD *)a1 + 48LL);
  v20 = *(_DWORD *)(a5 + 96);
  v22 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v21 = *(_QWORD *)(a5 + 104);
  v19 = *(_DWORD *)(a5 + 4) & 0x8000000;
  result = VfMajorIsNewRequest(a3, a4);
  v14 = (unsigned int)result;
  v18 = result;
  if ( *a4 != 3 && *a4 != 4 && *a4 != 14 && *a4 != 15 && *a4 != 22 && *(_DWORD *)(v9 + 56) == 2 )
  {
    v15 = *(unsigned __int8 *)(a1 + 60);
    if ( (unsigned __int8)v15 >= 2u && (*(_DWORD *)(a1 + 56) & 0x2000000) == 0 )
    {
      ViErrorDisplayDescription(769LL);
      if ( RtlStringCbPrintfA(pszDest, 0x5BuLL, "CulpritAddress = %p, Irp = %p, IRQL = %u.\n", a7, v7, v15) >= 0 )
        VfUtilDbgPrint(pszDest);
      result = ViErrorFinishReport(769LL, a7, v7, v15);
      *(_DWORD *)(a1 + 56) |= 0x2000000u;
      v14 = v18;
    }
  }
  if ( a3 )
  {
    v16 = *(_DWORD *)(a5 + 4);
    if ( (*(_BYTE *)(a1 + 56) & 0x20) != 0 && (v16 & 0x1000000) == 0 )
    {
      if ( (_DWORD)v14 && !v19 )
      {
        *(_DWORD *)(a5 + 4) = v16 | 0x1000000;
        ViErrorReport1(0x212u, a7, v7);
      }
      if ( v11 != v20 )
      {
        *(_DWORD *)(a5 + 4) |= 0x1000000u;
        v17 = 571;
        if ( a4[1] != 0xFF )
          v17 = 531;
        ViErrorReport1(v17, a7, v7);
      }
      if ( v22 != v21 )
      {
        *(_DWORD *)(a5 + 4) |= 0x1000000u;
        ViErrorReport1(0x214u, a7, v7);
      }
    }
    result = VfMajorIsValidIrpStatus(a4, v11, v14);
    if ( !(_DWORD)result )
      return ViErrorReport6(768LL, a7, v7, v11);
  }
  return result;
}
