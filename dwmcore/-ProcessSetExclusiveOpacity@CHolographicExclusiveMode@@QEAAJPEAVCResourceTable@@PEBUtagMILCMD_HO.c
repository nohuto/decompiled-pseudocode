__int64 __fastcall CHolographicExclusiveMode::ProcessSetExclusiveOpacity(
        CHolographicExclusiveMode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETEXCLUSIVEOPACITY *a3)
{
  return CHolographicExclusiveMode::SetProperty(this, 1LL, 18LL, (char *)a3 + 8);
}
