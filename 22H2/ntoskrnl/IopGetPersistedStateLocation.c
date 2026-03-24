/*
 * XREFs of IopGetPersistedStateLocation @ 0x140736030
 * Callers:
 *     IopCreateSecureDeviceClassSettings @ 0x140735DF8 (IopCreateSecureDeviceClassSettings.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x1406B87A0 (RtlGetPersistedStateLocation.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopGetPersistedStateLocation(__int64 a1, _WORD *a2, __int64 a3, _QWORD *a4)
{
  SIZE_T v6; // rsi
  PVOID PoolWithTag; // rbx
  int PersistedStateLocation; // edi
  __int64 result; // rax
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v10) = 0;
  v6 = 256LL;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x63466F49u);
    if ( !PoolWithTag )
    {
      PersistedStateLocation = -1073741670;
      goto LABEL_10;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"SecureDeviceClass",
                               0LL,
                               a2,
                               0,
                               PoolWithTag,
                               v6,
                               (unsigned int *)&v10);
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( (unsigned int)v10 <= (unsigned int)v6 )
    {
      PersistedStateLocation = -1073741595;
      break;
    }
    v6 = (unsigned int)v10;
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  if ( PersistedStateLocation >= 0 )
    goto LABEL_5;
LABEL_10:
  if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = 0LL;
  }
LABEL_5:
  result = (unsigned int)PersistedStateLocation;
  *a4 = PoolWithTag;
  return result;
}
