__int64 __fastcall NVMeSubmissionQueueAssignmentPolicyInit(_DWORD *a1)
{
  int v1; // edx
  int v2; // edx
  int v3; // edx
  int v4; // edx
  __int64 result; // rax

  v1 = a1[41];
  if ( !v1 )
  {
    if ( g_HeteroSystem )
      goto LABEL_10;
    v1 = 1;
  }
  v2 = v1 - 1;
  if ( !v2 )
  {
    a1[1092] = 0x10000;
    result = 0xFFFFFFFFLL;
    a1[1093] = 98304;
    goto LABEL_12;
  }
  v3 = v2 - 1;
  if ( !v3 )
    goto LABEL_10;
  v4 = v3 - 1;
  if ( !v4 )
  {
    result = 0xFFFFFFFFLL;
    a1[1092] = -1;
    a1[1093] = -1;
LABEL_12:
    a1[1095] = -1;
    a1[1094] = -1;
    a1[1090] = 0;
    goto LABEL_13;
  }
  if ( v4 == 1 )
  {
    result = 0xFFFFFFFFLL;
    a1[1090] = 1;
    a1[1092] = -1;
    a1[1093] = -1;
    a1[1094] = 0;
    a1[1095] = 0x10000;
LABEL_13:
    a1[1096] = -1;
    a1[1097] = -1;
    goto LABEL_14;
  }
LABEL_10:
  a1[1090] = 1;
  a1[1092] = 65537;
  *(_QWORD *)(a1 + 1093) = 0x20000LL;
  a1[1095] = 98304;
  a1[1096] = 0x10000;
  a1[1097] = 163840;
LABEL_14:
  a1[1091] = 0x8000;
  return result;
}
