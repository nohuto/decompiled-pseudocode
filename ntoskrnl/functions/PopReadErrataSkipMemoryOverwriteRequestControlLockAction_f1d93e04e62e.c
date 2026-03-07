__int64 PopReadErrataSkipMemoryOverwriteRequestControlLockAction()
{
  __int64 result; // rax
  GUID *v1; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+28h] [rbp-10h]
  int v3; // [rsp+2Ch] [rbp-Ch]
  int v4; // [rsp+40h] [rbp+8h] BYREF
  GUID **v5; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v2 = 16;
  v1 = &GUID_EM_RULE_SKIP_MEMORY_OVERWRITE_REQUEST_CONTROL_LOCK_ACTION;
  v4 = 1;
  v5 = &v1;
  PopErrataSkipMemoryOverwriteRequestControlLockAction = 0;
  result = EmClientRuleEvaluate(
             &GUID_EM_RULE_SKIP_MEMORY_OVERWRITE_REQUEST_CONTROL_LOCK_ACTION_QUERY,
             (__int64)&v5,
             1,
             &v4);
  if ( v4 == 2 )
    PopErrataSkipMemoryOverwriteRequestControlLockAction = 1;
  return result;
}
