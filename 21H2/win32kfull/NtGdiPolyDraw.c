/*
 * XREFs of NtGdiPolyDraw @ 0x1C02AFB40
 * Callers:
 *     <none>
 * Callees:
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C016B1FC (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 *     GrePolyDraw @ 0x1C02A0538 (GrePolyDraw.c)
 */

__int64 __fastcall NtGdiPolyDraw(HDC a1, struct _POINTL *a2, char *a3, unsigned int a4)
{
  unsigned int v7; // esi
  HANDLE v8; // rdi
  void *v9; // rbx
  __int64 v10; // rdi
  int IsEnabledDeviceUsage; // eax
  SIZE_T v12; // rdx
  HANDLE v13; // rax

  v7 = 1;
  v8 = 0LL;
  v9 = 0LL;
  if ( a4 <= 0x1FFFFFFF )
  {
    v10 = a4;
    if ( v10 * 8 )
    {
      if ( ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v10] > MmUserProbeAddress || &a2[v10] < a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    if ( a4 && ((unsigned __int64)&a3[a4] > MmUserProbeAddress || &a3[a4] < a3) )
      *(_BYTE *)MmUserProbeAddress = 0;
    IsEnabledDeviceUsage = Feature_2249667896__private_IsEnabledDeviceUsage();
    v12 = 8LL * a4;
    if ( IsEnabledDeviceUsage )
    {
      v8 = (HANDLE)GrepSecureVirtualMemory(a2, v12, 2LL);
      v13 = (HANDLE)GrepSecureVirtualMemory(a3, a4, 2LL);
    }
    else
    {
      v8 = MmSecureVirtualMemory(a2, v12, 2u);
      v13 = MmSecureVirtualMemory(a3, a4, 2u);
    }
    v9 = v13;
  }
  if ( !v8 || !v9 )
    v7 = 0;
  if ( v7 )
    v7 = GrePolyDraw(a1, a2, a3, a4);
  if ( v8 )
  {
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage() )
      GrepUnsecureVirtualMemory(v8);
    else
      MmUnsecureVirtualMemory(v8);
  }
  if ( v9 )
  {
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage() )
      GrepUnsecureVirtualMemory(v9);
    else
      MmUnsecureVirtualMemory(v9);
  }
  return v7;
}
