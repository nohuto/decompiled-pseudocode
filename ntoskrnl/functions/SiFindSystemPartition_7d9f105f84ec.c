__int64 __fastcall SiFindSystemPartition(__int64 a1)
{
  __int64 v1; // r9
  int DriveLayoutInformation; // eax
  PVOID v4; // r8
  unsigned int v5; // ebx
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v10; // edx
  _BYTE *v11; // rax
  PVOID P[2]; // [rsp+20h] [rbp-68h] BYREF
  wchar_t Dst[32]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(unsigned int *)(a1 + 4);
  P[0] = 0LL;
  swprintf_s(Dst, 0x20uLL, L"\\??\\PhysicalDrive%d", v1);
  DriveLayoutInformation = SiGetDriveLayoutInformation(Dst, P);
  v4 = P[0];
  v5 = DriveLayoutInformation;
  if ( DriveLayoutInformation >= 0 )
  {
    if ( *(_DWORD *)P[0] )
    {
      if ( *(_DWORD *)P[0] == 1 )
      {
        v6 = *((_DWORD *)P[0] + 1);
        v7 = 0LL;
        if ( v6 )
        {
          while ( 1 )
          {
            v8 = *((_QWORD *)P[0] + 18 * v7 + 10) - *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1;
            if ( !v8 )
              v8 = *((_QWORD *)P[0] + 18 * v7 + 11) - *(_QWORD *)PARTITION_SYSTEM_GUID.Data4;
            if ( !v8 )
              break;
            v7 = (unsigned int)(v7 + 1);
            if ( (unsigned int)v7 >= v6 )
              goto LABEL_9;
          }
LABEL_18:
          *(_DWORD *)(a1 + 8) = *((_DWORD *)P[0] + 36 * v7 + 18);
          goto LABEL_10;
        }
      }
    }
    else
    {
      v10 = *((_DWORD *)P[0] + 1);
      v7 = 0LL;
      if ( v10 )
      {
        v11 = (char *)P[0] + 81;
        while ( !*v11 )
        {
          v7 = (unsigned int)(v7 + 1);
          v11 += 144;
          if ( (unsigned int)v7 >= v10 )
            goto LABEL_9;
        }
        goto LABEL_18;
      }
    }
LABEL_9:
    v5 = -1073741275;
  }
LABEL_10:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v5;
}
