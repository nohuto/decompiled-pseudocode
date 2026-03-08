/*
 * XREFs of ?Initialize@SfmState@@QEAAHXZ @ 0x1C00D17E0
 * Callers:
 *     InitializeGre @ 0x1C031D988 (InitializeGre.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SfmState::Initialize(SfmState *this)
{
  _QWORD *v1; // rbx
  struct _OBJECT_ATTRIBUTES v3; // [rsp+30h] [rbp-38h] BYREF

  *(_QWORD *)&v3.Length = 48LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v1 = (_QWORD *)((char *)this + 24);
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)&v3.Attributes = 512LL;
  v3.RootDirectory = 0LL;
  v3.ObjectName = 0LL;
  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 5) = (char *)this + 40;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  if ( ZwCreateEvent((PHANDLE)this + 3, 0x1F0003u, &v3, NotificationEvent, 0) >= 0 )
    return 1LL;
  *v1 = 0LL;
  return 0LL;
}
