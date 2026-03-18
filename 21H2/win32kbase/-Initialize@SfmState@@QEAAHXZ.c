/*
 * XREFs of ?Initialize@SfmState@@QEAAHXZ @ 0x1C00B3048
 * Callers:
 *     InitializeGre @ 0x1C02E38D0 (InitializeGre.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SfmState::Initialize(SfmState *this)
{
  SfmTokenArray *v1; // rcx
  _QWORD *v2; // rbx
  struct _OBJECT_ATTRIBUTES v4; // [rsp+30h] [rbp-38h] BYREF

  v1 = gpSfmState;
  *(&v4.Length + 1) = 0;
  *(&v4.Attributes + 1) = 0;
  *(_QWORD *)gpSfmState = 0LL;
  *((_QWORD *)v1 + 1) = 0LL;
  v2 = (_QWORD *)((char *)v1 + 24);
  *((_DWORD *)v1 + 4) = 0;
  *((_QWORD *)v1 + 4) = 0LL;
  *((_DWORD *)v1 + 14) = 0;
  *((_QWORD *)v1 + 6) = (char *)v1 + 40;
  *((_QWORD *)v1 + 5) = (char *)v1 + 40;
  v4.Length = 48;
  v4.RootDirectory = 0LL;
  v4.Attributes = 512;
  v4.ObjectName = 0LL;
  *(_OWORD *)&v4.SecurityDescriptor = 0LL;
  if ( ZwCreateEvent((PHANDLE)v1 + 3, 0x1F0003u, &v4, NotificationEvent, 0) >= 0 )
    return 1LL;
  *v2 = 0LL;
  return 0LL;
}
