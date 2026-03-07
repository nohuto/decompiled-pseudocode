const wil_details_FeatureDescriptor *__fastcall wil_details_FeatureDescriptors_SkipPadding(
        const wil_details_FeatureDescriptor *p)
{
  while ( 1 )
  {
    if ( p >= wil_details_featureDescriptors_a )
      return 0LL;
    if ( p->featureStateCache )
      break;
    p = (const wil_details_FeatureDescriptor *)((char *)p + 8);
  }
  return p;
}
