/*
 * XREFs of IopGetPersistedStateLocation @ 0x14083B86C
 * Callers:
 *     IopCreateSecureDeviceClassSettings @ 0x14083B634 (IopCreateSecureDeviceClassSettings.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x14069ADC0 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetPersistedStateLocation(__int64 a1, _WORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // esi
  __int64 i; // rdx
  void *Pool2; // rdi
  int PersistedStateLocation; // eax
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v12) = 0;
  v5 = 256;
  for ( i = 256LL; ; i = v5 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, i, 1665560393LL);
    if ( !Pool2 )
    {
      v10 = -1073741670;
      goto LABEL_5;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"SecureDeviceClass",
                               0LL,
                               a2,
                               0,
                               Pool2,
                               v5,
                               (unsigned int *)&v12);
    v10 = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( (unsigned int)v12 <= v5 )
    {
      v10 = -1073741595;
      goto LABEL_10;
    }
    v5 = v12;
    ExFreePoolWithTag(Pool2, 0);
  }
  if ( PersistedStateLocation >= 0 )
    goto LABEL_5;
LABEL_10:
  if ( Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
  }
LABEL_5:
  result = v10;
  *a4 = Pool2;
  return result;
}
