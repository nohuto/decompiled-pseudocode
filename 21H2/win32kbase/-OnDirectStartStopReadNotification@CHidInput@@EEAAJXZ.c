/*
 * XREFs of ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C00475F0
 * Callers:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C0049760 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 * Callees:
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C004763C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0047820 (RIMDirectStartStopDeviceRead.c)
 *     ApiSetIsRemoteConnection @ 0x1C0047B78 (ApiSetIsRemoteConnection.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C0047C7C (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 */

__int64 __fastcall CHidInput::OnDirectStartStopReadNotification(CHidInput *this)
{
  char v3; // [rsp+38h] [rbp+10h] BYREF

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v3, 1);
  if ( !(unsigned int)ApiSetIsRemoteConnection() && *((_QWORD *)this + 1) != -1LL )
    RIMDirectStartStopDeviceRead();
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v3);
  return 0LL;
}
