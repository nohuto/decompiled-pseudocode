/*
 * XREFs of sub_1800F479C @ 0x1800F479C
 * Callers:
 *     sub_1800F2D78 @ 0x1800F2D78 (sub_1800F2D78.c)
 *     sub_1800F43B0 @ 0x1800F43B0 (sub_1800F43B0.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     sub_1800F26E0 @ 0x1800F26E0 (sub_1800F26E0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F479C(__int64 a1, __int64 a2, int a3, unsigned int a4, unsigned int a5, _QWORD *a6)
{
  DWORD v10; // eax
  int v11; // ebx
  signed int LastError; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v15; // [rsp+38h] [rbp-20h]
  LPCRITICAL_SECTION v16; // [rsp+40h] [rbp-18h] BYREF
  char v17; // [rsp+48h] [rbp-10h]

  sub_180066980((__int64)&v16, (struct _RTL_CRITICAL_SECTION *)(a1 + 24));
  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 64));
  v10 = WaitForSingleObject(*(HANDLE *)(a1 + 112), 0x3E8u);
  if ( v10 == 258 )
  {
    v11 = -2147023436;
  }
  else
  {
    if ( v10 != -1 )
      goto LABEL_7;
    LastError = GetLastError();
    v11 = LastError;
    if ( LastError > 0 )
      v11 = (unsigned __int16)LastError | 0x80070000;
    if ( v11 >= 0 )
    {
LABEL_7:
      v11 = RmReleaseResources(a2);
      if ( v11 >= 0 )
        v11 = sub_1800F26E0(a1, a3, a4, a5, 0, a6);
      ReleaseMutex(*(HANDLE *)(a1 + 112));
    }
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v17 )
    LeaveCriticalSection(v16);
  return (unsigned int)v11;
}
