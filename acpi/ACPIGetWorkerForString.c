/*
 * XREFs of ACPIGetWorkerForString @ 0x1C002B860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     ACPIGetConvertToCompatibleID @ 0x1C002983C (ACPIGetConvertToCompatibleID.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C00298A4 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToDeviceID @ 0x1C0029CB8 (ACPIGetConvertToDeviceID.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C0029D20 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToHardwareID @ 0x1C002A0C4 (ACPIGetConvertToHardwareID.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x1C002A12C (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetConvertToInstanceID @ 0x1C002A39C (ACPIGetConvertToInstanceID.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C002A404 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToPnpID @ 0x1C002A5E8 (ACPIGetConvertToPnpID.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C002A650 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToSerialIDWide @ 0x1C002A834 (ACPIGetConvertToSerialIDWide.c)
 *     ACPIGetConvertToString @ 0x1C002A908 (ACPIGetConvertToString.c)
 *     ACPIGetConvertToStringWide @ 0x1C002A974 (ACPIGetConvertToStringWide.c)
 *     FreeDataBuffs @ 0x1C004B50C (FreeDataBuffs.c)
 */

void __fastcall ACPIGetWorkerForString(__int64 a1, unsigned int a2, __int64 a3, char *a4)
{
  __int64 *v5; // r8
  unsigned int v7; // ebp
  unsigned int v9; // edi
  int v10; // r9d
  unsigned int v11; // eax
  void (__fastcall *v12)(__int64, _QWORD, _QWORD, _QWORD); // rax
  KIRQL v13; // al
  char **v14; // r9
  void **v15; // r8
  int *v16; // [rsp+28h] [rbp-10h]
  unsigned int *v17; // [rsp+28h] [rbp-10h]

  v5 = (__int64 *)*((_QWORD *)a4 + 7);
  v7 = a2 >> 31;
  if ( v5 )
  {
    if ( *(_WORD *)(a3 + 2) != 2 || *(_QWORD *)(a3 + 32) && *(_DWORD *)(a3 + 24) )
    {
      v10 = *(_DWORD *)a4;
      if ( (v10 & 0x10) != 0 )
      {
        v16 = (int *)*((_QWORD *)a4 + 8);
        if ( (v10 & 0x20) != 0 )
        {
          v11 = ACPIGetConvertToDeviceIDWide(*((_QWORD *)a4 + 3), a2, a3, v10, v5, v16);
        }
        else if ( (v10 & 0x40) != 0 )
        {
          v11 = ACPIGetConvertToHardwareIDWide(*((_QWORD *)a4 + 3), a2, a3, v10, (char **)v5, (unsigned int *)v16);
        }
        else if ( (v10 & 0x80u) == 0 )
        {
          if ( (v10 & 0x200) != 0 )
          {
            v11 = ACPIGetConvertToPnpIDWide(*((_QWORD *)a4 + 3), a2, a3, v10, (char **)v5, v16);
          }
          else if ( (v10 & 0x100) != 0 )
          {
            v11 = ACPIGetConvertToCompatibleIDWide(*((_QWORD *)a4 + 3), a2, a3, v10, v5, (unsigned int *)v16);
          }
          else if ( (v10 & 0x2000) != 0 )
          {
            v11 = ACPIGetConvertToSerialIDWide((__int64)v5, a2, a3, v10, (wchar_t **)v5, v16);
          }
          else
          {
            v11 = ACPIGetConvertToStringWide((__int64)v5, a2, a3, v10, (char **)v5, v16);
          }
        }
        else
        {
          v11 = ACPIGetConvertToInstanceIDWide(*((_QWORD *)a4 + 3), a2, a3, v10, v5, v16);
        }
      }
      else
      {
        v17 = (unsigned int *)*((_QWORD *)a4 + 8);
        if ( (v10 & 0x20) != 0 )
        {
          v11 = ACPIGetConvertToDeviceID(*((_QWORD *)a4 + 3), a2, a3, v10, v5, v17);
        }
        else if ( (v10 & 0x40) != 0 )
        {
          v11 = ACPIGetConvertToHardwareID(*((_QWORD *)a4 + 3), a2, a3, v10, v5, v17);
        }
        else if ( (v10 & 0x80u) == 0 )
        {
          if ( (v10 & 0x200) != 0 )
          {
            v11 = ACPIGetConvertToPnpID(*((_QWORD *)a4 + 3), a2, a3, v10, v5, v17);
          }
          else if ( (v10 & 0x100) != 0 )
          {
            v11 = ACPIGetConvertToCompatibleID(*((_QWORD *)a4 + 3), a2, a3, v10, v5, v17);
          }
          else
          {
            v11 = ACPIGetConvertToString((__int64)v5, a2, a3, v10, v5, v17);
          }
        }
        else
        {
          v11 = ACPIGetConvertToInstanceID(*((_QWORD *)a4 + 3), a2, a3, v10, v5, v17);
        }
      }
      v9 = v11;
    }
    else
    {
      v9 = -1072431089;
    }
  }
  else
  {
    v9 = -1073741670;
  }
  *((_DWORD *)a4 + 18) = v9;
  if ( !(_BYTE)v7 )
  {
    dword_1C006F938 = 0;
    pszDest = 0;
    FreeDataBuffs(a3, 1LL);
  }
  if ( (*(_DWORD *)a4 & 0x10000000) == 0 )
  {
    v12 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))*((_QWORD *)a4 + 5);
    if ( v12 )
      v12(a1, v9, 0LL, *((_QWORD *)a4 + 6));
    v13 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
    v14 = (char **)*((_QWORD *)a4 + 1);
    if ( v14[1] != a4 + 8 || (v15 = (void **)*((_QWORD *)a4 + 2), *v15 != a4 + 8) )
      __fastfail(3u);
    *v15 = v14;
    v14[1] = (char *)v15;
    KeReleaseSpinLock(&AcpiGetLock, v13);
    ExFreePoolWithTag(a4, 0);
  }
}
