/*
 * XREFs of sub_1800C1BA0 @ 0x1800C1BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005D19C @ 0x18005D19C (sub_18005D19C.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800C1C58 @ 0x1800C1C58 (sub_1800C1C58.c)
 */

__int64 __fastcall sub_1800C1BA0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  unsigned int v3; // ebx
  unsigned int v4; // edi
  __int64 v5; // rax
  int v6; // eax

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  v3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v4 = 0;
  if ( *(_DWORD *)(a1 + 124) )
  {
    while ( 1 )
    {
      v5 = sub_18005D19C((_QWORD *)(a1 + 88), v4);
      v6 = sub_1800C1C58(v5);
      v3 = v6;
      if ( v6 < 0 )
        break;
      if ( ++v4 >= *(_DWORD *)(a1 + 124) )
        goto LABEL_6;
    }
    sub_18005E8F8((__int64)"CVolumeControlBase::SetVolumeLimitScalar", 871, v6);
  }
LABEL_6:
  if ( v1 )
    LeaveCriticalSection(v1);
  return v3;
}
