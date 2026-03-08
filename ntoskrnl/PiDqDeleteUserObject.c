/*
 * XREFs of PiDqDeleteUserObject @ 0x1409592CC
 * Callers:
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x1409593D4 (PiDqDeleteUserObjectFromLoadedHives.c)
 * Callees:
 *     wcsrchr @ 0x1403D5F90 (wcsrchr.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140747694 (PiDqGetRelativeObjectRegPath.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14085F0A8 (_RegRtlDeleteKeyTransacted.c)
 *     _RegRtlDeleteTreeInternal @ 0x140868B00 (_RegRtlDeleteTreeInternal.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqDeleteUserObject(void *a1, const WCHAR *a2, int a3)
{
  int RelativeObjectRegPath; // ebp
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  int v9; // edi
  unsigned int i; // edi
  wchar_t *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  wchar_t *Str; // [rsp+58h] [rbp+20h] BYREF

  Str = 0LL;
  RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(a2, a3, (PVOID *)&Str);
  if ( RelativeObjectRegPath >= 0 )
  {
    if ( *(_QWORD *)&PiPnpRtlCtx && (v6 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
      v7 = *(_QWORD *)(v6 + 8);
    else
      v7 = 0LL;
    RelativeObjectRegPath = RegRtlDeleteTreeInternal(a1, Str, v7, 0);
    v8 = 2;
    v9 = a3 - 1;
    if ( v9 )
    {
      if ( v9 != 2 )
        goto LABEL_17;
      v8 = 1;
    }
    for ( i = 0; i < v8; ++i )
    {
      v11 = wcsrchr(Str, 0x5Cu);
      if ( v11 )
      {
        *v11 = 0;
        if ( *(_QWORD *)&PiPnpRtlCtx && (v12 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
          v13 = *(_QWORD *)(v12 + 8);
        else
          v13 = 0LL;
        if ( (int)RegRtlDeleteKeyTransacted(a1, Str, v13) < 0 )
          break;
      }
    }
  }
LABEL_17:
  if ( Str )
    ExFreePoolWithTag(Str, 0x58706E50u);
  return (unsigned int)RelativeObjectRegPath;
}
